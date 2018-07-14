#ifndef SWMODEL_H
#define SWMODEL_H
#include "../common/SWMatrix.h"
#include <memory>

class SWModel: public Proxy_PropertyNotification<SWModel>
{
public:
    SWModel();
    ~SWModel();
    std::shared_ptr<SWMatrix> getMatrix();
    void newLayout(int row, int col);

private:
    std::shared_ptr<SWMatrix> sp_SWMatrix;
};

#endif // SWMODEL_H
