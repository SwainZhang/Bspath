//
// Created by 张瑞 on 2017/9/3.
//

#include "com_example_emery_bspath_FileDiffAndPathUtils.h"
#include "bsdiff.h"
#include "bspath.h"
#include "jni.h"
JNIEXPORT void JNICALL Java_com_example_emery_bspath_FileDiffAndPathUtils_bisDiff
        (JNIEnv *env, jobject clazz, jstring oldFile, jstring newFile, jstring pathFile) {
    char *oldFilePath;
    char *newFilePath;
    char *pathFilePath;

    oldFilePath = (*env)->GetStringUTFChars(env,oldFile,JNI_FALSE);
    newFilePath = (*env)->GetStringUTFChars(env,newFile, JNI_FALSE);
    pathFilePath = (*env)->GetStringUTFChars(env,pathFile, JNI_FALSE);
    int argc = 4;
    char *argv[4];
    argv[0] = "bisdiff";
    argv[1] = oldFilePath;
    argv[2] = newFilePath;
    argv[3] = pathFilePath;

    bsdiff_main(argc, argv);

    (*env)->ReleaseStringUTFChars(env,oldFile, oldFilePath);
    (*env)->ReleaseStringUTFChars(env,newFile, newFilePath);
    (*env)->ReleaseStringUTFChars(env,pathFile, pathFilePath);

}

JNIEXPORT void JNICALL Java_com_example_emery_bspath_FileDiffAndPathUtils_bisPath
        (JNIEnv *env, jobject clazz, jstring oldFile, jstring newFile, jstring pathFile){
    char *oldFilePath;
    char *newFilePath;
    char *pathFilePath;
    oldFilePath = (*env)->GetStringUTFChars(env,oldFile, JNI_FALSE);
    newFilePath = (*env)->GetStringUTFChars(env,newFile, JNI_FALSE);
    pathFilePath = (*env)->GetStringUTFChars(env,pathFile, JNI_FALSE);
    int argc = 4;
    char *argv[4];
    argv[0] = "bisdiff";
    argv[1] = oldFilePath;
    argv[2] = newFilePath;
    argv[3] = pathFilePath;

    bspath_main(argc, argv);

    (*env)->ReleaseStringUTFChars(env,oldFile, oldFilePath);
    (*env)->ReleaseStringUTFChars(env,newFile, newFilePath);
    (*env)->ReleaseStringUTFChars(env,pathFile, pathFilePath);
}
