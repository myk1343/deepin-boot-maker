#ifndef SEVENZIPTEST_H
#define SEVENZIPTEST_H
#include <gtest/gtest.h>
#include <../libdbm/util/sevenzip.h>
class SevenZipTest : public testing::Test
{
protected:
    // Sets up the test fixture.
    virtual void SetUp() override;

    // Tears down the test fixture.
    virtual void TearDown() override;
public:
    SevenZip *m_sevenZip;
};


#endif // SEVENZIPTEST_H
