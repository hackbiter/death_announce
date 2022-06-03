// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelDbEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBENV
public:
    class LevelDbEnv& operator=(class LevelDbEnv const &) = delete;
    LevelDbEnv(class LevelDbEnv const &) = delete;
#endif

public:
    /*
    inline void StartThread(void ( *)(void *) a0, void * a1){
        void (LevelDbEnv::*rv)(void ( *)(void *), void *);
        *((void**)&rv) = dlsym("?StartThread@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z");
        return (this->*rv)(std::forward<void ( *)(void *)>(a0), std::forward<void *>(a1));
    }
    inline  ~LevelDbEnv(){
         (LevelDbEnv::*rv)();
        *((void**)&rv) = dlsym("??1LevelDbEnv@@UEAA@XZ");
        return (this->*rv)();
    }
    inline class leveldb::Status CreateDir(std::string const & a0){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?CreateDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline class leveldb::Status DeleteDir(std::string const & a0){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?DeleteDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline class leveldb::Status DeleteFileA(std::string const & a0){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?DeleteFileA@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline bool FileExists(std::string const & a0){
        bool (LevelDbEnv::*rv)(std::string const &);
        *((void**)&rv) = dlsym("?FileExists@LevelDbEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0));
    }
    inline class leveldb::Status GetChildren(std::string const & a0, std::vector<std::string> * a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, std::vector<std::string> *);
        *((void**)&rv) = dlsym("?GetChildren@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<std::vector<std::string> *>(a1));
    }
    inline class leveldb::Status GetFileSize(std::string const & a0, unsigned __int64 * a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, unsigned __int64 *);
        *((void**)&rv) = dlsym("?GetFileSize@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<unsigned __int64 *>(a1));
    }
    inline class leveldb::Status GetTestDirectory(std::string * a0){
        class leveldb::Status (LevelDbEnv::*rv)(std::string *);
        *((void**)&rv) = dlsym("?GetTestDirectory@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string *>(a0));
    }
    inline class leveldb::Status LockFile(std::string const & a0, class leveldb::FileLock ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::FileLock **);
        *((void**)&rv) = dlsym("?LockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::FileLock **>(a1));
    }
    inline class leveldb::Status NewAppendableFile(std::string const & a0, class leveldb::WritableFile ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::WritableFile **);
        *((void**)&rv) = dlsym("?NewAppendableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::WritableFile **>(a1));
    }
    inline class leveldb::Status NewLogger(std::string const & a0, class leveldb::Logger ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::Logger **);
        *((void**)&rv) = dlsym("?NewLogger@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::Logger **>(a1));
    }
    inline class leveldb::Status NewRandomAccessFile(std::string const & a0, class leveldb::RandomAccessFile ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::RandomAccessFile **);
        *((void**)&rv) = dlsym("?NewRandomAccessFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::RandomAccessFile **>(a1));
    }
    inline class leveldb::Status NewSequentialFile(std::string const & a0, class leveldb::SequentialFile ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::SequentialFile **);
        *((void**)&rv) = dlsym("?NewSequentialFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::SequentialFile **>(a1));
    }
    inline class leveldb::Status NewWritableFile(std::string const & a0, class leveldb::WritableFile ** a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, class leveldb::WritableFile **);
        *((void**)&rv) = dlsym("?NewWritableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<class leveldb::WritableFile **>(a1));
    }
    inline unsigned __int64 NowMicros(){
        unsigned __int64 (LevelDbEnv::*rv)();
        *((void**)&rv) = dlsym("?NowMicros@LevelDbEnv@@UEAA_KXZ");
        return (this->*rv)();
    }
    inline class leveldb::Status RenameFile(std::string const & a0, std::string const & a1){
        class leveldb::Status (LevelDbEnv::*rv)(std::string const &, std::string const &);
        *((void**)&rv) = dlsym("?RenameFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<std::string const &>(a1));
    }
    inline void Schedule(void ( *)(void *) a0, void * a1){
        void (LevelDbEnv::*rv)(void ( *)(void *), void *);
        *((void**)&rv) = dlsym("?Schedule@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z");
        return (this->*rv)(std::forward<void ( *)(void *)>(a0), std::forward<void *>(a1));
    }
    inline void SleepForMicroseconds(int a0){
        void (LevelDbEnv::*rv)(int);
        *((void**)&rv) = dlsym("?SleepForMicroseconds@LevelDbEnv@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class leveldb::Status UnlockFile(class leveldb::FileLock * a0){
        class leveldb::Status (LevelDbEnv::*rv)(class leveldb::FileLock *);
        *((void**)&rv) = dlsym("?UnlockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAVFileLock@3@@Z");
        return (this->*rv)(std::forward<class leveldb::FileLock *>(a0));
    }
    */
    MCAPI bool IsComplete() const;
    MCAPI LevelDbEnv();

protected:

private:
    MCAPI static class LevelDbEnv * sSingleton;

};