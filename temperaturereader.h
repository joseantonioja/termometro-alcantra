#ifndef TEMPERATUREREADER_H
#define TEMPERATUREREADER_H
#include <QThread>

class TemperatureReader: public QThread
{
    Q_OBJECT
    public:
        explicit TemperatureReader(QObject* parent=0);
    protected:
        void run() Q_DECL_OVERRIDE;
    signals:
        void new_read(int);
};
#endif // TEMPERATUREREADER_H
