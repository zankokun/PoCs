#include <stdio.h>

template <typename DataType>
class MultiComparableType
{
public:
    constexpr MultiComparableType(const DataType &data) : data{data} {}

    class IsLessBool
    {
    public:
        constexpr IsLessBool(DataType lsh, DataType rsh) : result((lsh < rsh ? true : false)), max{(lsh < rsh ? rsh : lsh)} {}
        explicit constexpr operator bool()
        {
            return result;
        }
        constexpr IsLessBool operator<(const MultiComparableType &rsh) const
        {
            return IsLessBool{max, rsh.data};
        }

    private:
        bool result;
        DataType max;
    };

    constexpr IsLessBool operator<(const MultiComparableType &rsh) const
    {
        return IsLessBool{data, rsh.data};
    }

private:
    DataType data;
};

int main()
{
    constexpr MultiComparableType<int> a{1}, b{2}, c{3}, d{4}, e{5};

    static_assert( a < b < c);

    return 0;
}