/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_udt_udt */

#ifndef _Included_com_udt_udt
#define _Included_com_udt_udt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_udt_udt
 * Method:    startup
 * Signature: ()I
 */
JNIEXPORT jboolean JNICALL Java_com_udt_udt_startup
  (JNIEnv *, jobject);

/*
 * Class:     com_udt_udt
 * Method:    cleanup
 * Signature: ()I
 */
JNIEXPORT jboolean JNICALL Java_com_udt_udt_cleanup
  (JNIEnv *, jobject);

/*
 * Class:     com_udt_udt
 * Method:    socket
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_udt_udt_socket
  (JNIEnv *, jobject);

/*
 * Class:     com_udt_udt
 * Method:    connect
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jboolean JNICALL Java_com_udt_udt_connect
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_udt_udt
 * Method:    close
 * Signature: (I)I
 */
JNIEXPORT jboolean JNICALL Java_com_udt_udt_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_udt_udt
 * Method:    send
 * Signature: (I[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_udt_udt_send
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_udt_udt
 * Method:    recv
 * Signature: (I[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_udt_udt_recv
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jint);




//sock,ip,port
JNIEXPORT jboolean JNICALL Java_com_udt_udt_bind
        (JNIEnv *, jobject, jint, jstring, jint);

//udtsock, udp-sock
//JNIEXPORT jint JNICALL Java_com_udt_udt_bind
//        (JNIEnv *, jobject, jint,  jint);

//sock, backlog
JNIEXPORT jboolean JNICALL Java_com_udt_udt_listen
        (JNIEnv *, jobject, jint,  jint);




//static UDTSOCKET accept(UDTSOCKET u, sockaddr* addr, int* addrlen);

//static int getpeername(UDTSOCKET u, sockaddr* name, int* namelen);
//static int getsockname(UDTSOCKET u, sockaddr* name, int* namelen);

//sock,level, optname, optval
JNIEXPORT jboolean JNICALL Java_com_udt_udt_setsockopt
        (JNIEnv *, jobject, jint,  jint, jint,jint);
//static int getsockopt(UDTSOCKET u, int level, UDTOpt optname, void* optval, int* optlen);
//static int setsockopt(UDTSOCKET u, int level, UDTOpt optname, const void* optval, int optlen);

//static int sendmsg(UDTSOCKET u, const char* buf, int len, int ttl = -1, bool inorder = false);
//static int recvmsg(UDTSOCKET u, char* buf, int len);

//static int64_t sendfile(UDTSOCKET u, std::fstream& ifs, int64_t& offset, const int64_t& size, const int& block = 364000);
//static int64_t recvfile(UDTSOCKET u, std::fstream& ofs, int64_t& offset, const int64_t& size, const int& block = 7280000);

//static int select(int nfds, ud_set* readfds, ud_set* writefds, ud_set* exceptfds, const timeval* timeout);
//static int selectEx(const std::vector<UDTSOCKET>& fds, std::vector<UDTSOCKET>* readfds, std::vector<UDTSOCKET>* writefds, std::vector<UDTSOCKET>* exceptfds, int64_t msTimeOut);
//static int epoll_create();
//static int epoll_add_usock(const int eid, const UDTSOCKET u, const int* events = NULL);
//static int epoll_add_ssock(const int eid, const SYSSOCKET s, const int* events = NULL);
//static int epoll_remove_usock(const int eid, const UDTSOCKET u);
//static int epoll_remove_ssock(const int eid, const SYSSOCKET s);
//static int epoll_wait(const int eid, std::set<UDTSOCKET>* readfds, std::set<UDTSOCKET>* writefds, int64_t msTimeOut, std::set<SYSSOCKET>* lrfds = NULL, std::set<SYSSOCKET>* wrfds = NULL);
//static int epoll_release(const int eid);
//static CUDTException& getlasterror();
//static int perfmon(UDTSOCKET u, CPerfMon* perf, bool clear = true);
//static UDTSTATUS getsockstate(UDTSOCKET u);

JNIEXPORT jobject JNICALL Java_com_udt_udt_getLastError(JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_com_udt_udt_waitSendFinish(JNIEnv *, jobject, jint);



#ifdef __cplusplus
}
#endif
#endif
