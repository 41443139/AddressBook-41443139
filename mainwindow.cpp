#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("通訊錄");

    // 確保表格欄位設置完整
    if (ui->tableWidget->columnCount() == 0) {
        ui->tableWidget->setColumnCount(4);
        QStringList headers;
        headers << "學號" << "班級" << "姓名" << "電話";
        ui->tableWidget->setHorizontalHeaderLabels(headers);
    }

    // 作業要求：建置時 widget 中無資料
    ui->tableWidget->setRowCount(0);

    // 表格最後一欄自動延伸
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 1. 新增功能
void MainWindow::on_btnAdd_clicked()
{
    QString id = ui->lineEditId->text().trimmed();
    QString className = ui->lineEditClass->text().trimmed();
    QString name = ui->lineEditName->text().trimmed();
    QString phone = ui->lineEditPhone->text().trimmed();

    if (id.isEmpty() || className.isEmpty() || name.isEmpty() || phone.isEmpty()) {
        QMessageBox::warning(this, "提示", "所有欄位皆不可為空！");
        return;
    }

    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(id));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(className));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(name));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(phone));

    // 清空輸入欄位
    ui->lineEditId->clear();
    ui->lineEditClass->clear();
    ui->lineEditName->clear();
    ui->lineEditPhone->clear();
}

// 2. 匯出 CSV 功能
void MainWindow::on_btnExport_clicked()
{
    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::warning(this, "提示", "目前沒有資料可供匯出！");
        return;
    }

    QString filePath = QFileDialog::getSaveFileName(
        this,
        "匯出 CSV",
        "contacts.csv",
        "CSV 檔案 (*.csv)"
        );

    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "錯誤", "無法寫入檔案！");
        return;
    }

    QTextStream out(&file);

    // 逐列輸出
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
            QTableWidgetItem *item = ui->tableWidget->item(row, col);
            rowData << (item ? item->text() : "");
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(this, "成功", "資料已成功匯出至 CSV！");
}

// 3. 匯入 CSV 功能（本次作業核心功能）
void MainWindow::on_btnImport_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(
        this,
        "匯入 CSV",
        "",
        "CSV 檔案 (*.csv);;所有檔案 (*.*)"
        );

    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "錯誤", "無法讀取檔案！");
        return;
    }

    QTextStream in(&file);

    // 匯入前清空表格原有內容
    ui->tableWidget->setRowCount(0);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList fields = line.split(',');

        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        for (int col = 0; col < fields.size() && col < 4; ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(fields.at(col).trimmed()));
        }
    }

    file.close();
    QMessageBox::information(this, "成功", "資料已成功匯入！");
}
