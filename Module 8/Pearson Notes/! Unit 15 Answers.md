## Quiz 15-1
### Question 1
```c++
class CameraPhone : public Phone
{
    private:
        int imageSize;
        int memorySize;
    public:
        CameraPhone(int, int);
        int numPictures();
};

CameraPhone::CameraPhone(int imgSize, int memSize)
{
    imageSize = imgSize;
    memorySize = memSize;
}
int CameraPhone::numPictures()
{ return memorySize/imageSize; }
```