//
//  CustomFilter_0.h
//  filterLib
//
//

#ifndef CustomFilter_0_h
#define CustomFilter_0_h

#include "cgeGLFunctions.h"

//standard demo

class CustomFilter_0 : public CGE::CGEImageFilterInterface
{
public:
    
    bool init();
    
    void render2Texture(CGE::CGEImageHandlerInterface* handler, GLuint srcTexture, GLuint vertexBufferID);
    
protected:
    GLint mStepLoc;
};

#endif
