#pragma once
#include "kernel\qwidget.h"
#include "Pre.h"

class OgreViewWidget : public QWidget  
{  
	Q_OBJECT   
public:  
	OgreViewWidget(QWidget* parent);  
	~OgreViewWidget();  
	//QSize minimumSizeHint() const;  
	//QSize sizeHint() const;  
protected:    
	void setupView();//����Ogreʹ�õ����ݣ���������;  
	void update();//ͨ�������ֶ����³�������  
	void setupResources();
	void createScene();  
	void createLight();  
	void resizeEvent(QResizeEvent* evt);//���ڿ�������  
	void timerEvent(QTimerEvent* evt);//������һʱ�������´���  
	void paintEvent(QPaintEvent* evt);//�ǣ���Ȼ�ô�����          
	//��Ϣ��Ӧ  
	void keyPressEvent(QKeyEvent* evt);  
	void keyReleaseEvent(QKeyEvent* evt){}  
	void mousePressEvent(QMouseEvent* evt);  
	void mouseReleaseEvent(QMouseEvent* evt){}  
	void mouseMoveEvent(QMouseEvent* evt){}  
	void wheelEvent(QWheelEvent* evt);   
	//�й�Ogre  
	Ogre::RenderWindow* mRenderWindow;  
	Ogre::SceneManager* mSceneMgr;  
	Ogre::Camera* mCamera;  
	Ogre::Viewport* mVp;  
	Ogre::Root* mRoot;  
	Ogre::Light* mainLight;    
	Ogre::Entity* mainEnt;  
	Ogre::SceneNode* mainNode;  
	//һЩ���Ʊ�����û����ȫ�г�  
	Ogre::Vector3 mDirection;  
	Ogre::Real mRotate;   
	Ogre::Real angleX;
	Ogre::Real angleY;
	Ogre::Real rotX;
	Ogre::Real rotY;
	bool mouseLeftPressed;
	bool mouseRightPressed;
	bool mouseMiddleBtn;
	Ogre::Vector2 mousePos;
};  