#include "viewdir.h"

ViewDir::ViewDir()
{

}

void ViewDir::getHomeList()
{
	auto rootPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);

	QDir dir(rootPath);
	QStringList rootList = dir.entryList(QDir::NoDotAndDotDot | QDir::Dirs);
	this->rootList = rootList;
}

void ViewDir::showRootDir()
{
	auto rootPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);

	QDir dir(rootPath);
	QStringList rootList = dir.entryList(QDir::NoDotAndDotDot | QDir::Dirs);
	for (auto str: rootList)
	{
		std::cout << str.toStdString() << std::endl;
	}
}
