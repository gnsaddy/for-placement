
class ReadWriteFile:

    print("Writing into file")

    def writing(self, file_name):
        with open(file_name, 'w') as file:
            file.write(input("Enter file data: "))

    print("reading file")

    def reading(self, file_name):
        with open(file_name, 'r') as file:
            for each in file:
                print(each)


if __name__ == "__main__":
    fname = input("file name: ")
    obj = ReadWriteFile()
    obj.writing(fname)
    obj.reading(fname)
