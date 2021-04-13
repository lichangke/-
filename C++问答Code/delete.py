import os
import shutil
import os.path
import stat

DeleteDirList = [".idea","cmake-build-debug"]

def funcDeleteDir(path):
    for parent, dirnames, filenames in os.walk(path):  # 遍历文件夹下面的所有文件夹
        for dirname in dirnames:
            strfilepath = parent + os.sep + dirname
            if os.path.isdir(strfilepath):
                if dirname in DeleteDirList:
                    shutil.rmtree(strfilepath)  # 删除此文件夹
                else:
                    funcDeleteDir(strfilepath)

if __name__ == '__main__':
    path = str(".")
    funcDeleteDir(path)