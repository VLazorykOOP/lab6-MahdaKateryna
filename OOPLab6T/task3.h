#include <iostream>
#include <string>
using namespace std;

class Base {
protected:
    string name;

public:
    Base(const string& baseName) : name(baseName) {}

    virtual ~Base() {}

    virtual void displayInfo() const {
        cout << "Base Name: " << name << endl;
    }

    friend ostream& operator<<(ostream& os, const Base& base);
    friend istream& operator>>(istream& is, Base& base);
};

ostream& operator<<(ostream& os, const Base& base) {
    os << "Base Name: " << base.name << endl;
    return os;
}

istream& operator>>(istream& is, Base& base) {
    cout << "Enter Base Name: ";
    is >> base.name;
    return is;
}

class ReadableFile : virtual public Base {
protected:
    string filePath;

public:
    ReadableFile(const string& baseName, const string& path) : Base(baseName), filePath(path) {}

    virtual ~ReadableFile() {}

    void displayInfo() const override {
        Base::displayInfo();
        cout << "File Path: " << filePath << endl;
    }

    friend ostream& operator<<(ostream& os, const ReadableFile& file);
    friend istream& operator>>(istream& is, ReadableFile& file);
};

ostream& operator<<(ostream& os, const ReadableFile& file) {
    os << static_cast<const Base&>(file);
    os << "File Path: " << file.filePath << endl;
    return os;
}

istream& operator>>(istream& is, ReadableFile& file) {
    is >> static_cast<Base&>(file);
    cout << "Enter File Path: ";
    is >> file.filePath;
    return is;
}

class WritableFile : virtual public Base {
protected:
    string filePath;

public:
    WritableFile(const string& baseName, const string& path) : Base(baseName), filePath(path) {}

    virtual ~WritableFile() {}

    void displayInfo() const override {
        Base::displayInfo();
        cout << "File Path: " << filePath << endl;
    }

    friend ostream& operator<<(ostream& os, const WritableFile& file);
    friend istream& operator>>(istream& is, WritableFile& file);
};

ostream& operator<<(ostream& os, const WritableFile& file) {
    os << static_cast<const Base&>(file);
    os << "File Path: " << file.filePath << endl;
    return os;
}

istream& operator>>(istream& is, WritableFile& file) {
    is >> static_cast<Base&>(file);
    cout << "Enter File Path: ";
    is >> file.filePath;
    return is;
}

class ReadWritableFile : public ReadableFile, public WritableFile {
public:
    ReadWritableFile(const string& baseName, const string& path)
        : Base(baseName), ReadableFile(baseName, path), WritableFile(baseName, path) {}

    void displayInfo() const override {
        ReadableFile::displayInfo();
        WritableFile::displayInfo();
    }

    friend ostream& operator<<(ostream& os, const ReadWritableFile& file);
    friend istream& operator>>(istream& is, ReadWritableFile& file);
};

ostream& operator<<(ostream& os, const ReadWritableFile& file) {
    os << static_cast<const ReadableFile&>(file);
    os << static_cast<const WritableFile&>(file);
    return os;
}

istream& operator>>(istream& is, ReadWritableFile& file) {
    is >> static_cast<ReadableFile&>(file);
    is >> static_cast<WritableFile&>(file);
    return is;
}

