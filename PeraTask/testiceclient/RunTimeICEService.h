// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.0
//
// <auto-generated>
//
// Generated from file `RunTimeICEService.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __E__code_WorkPlatForm_PeraPcIce_testiceclient_RunTimeICEService_h__
#define __E__code_WorkPlatForm_PeraPcIce_testiceclient_RunTimeICEService_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace FlexwareRuntimeICEService
{

class RunTimeICEService;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::FlexwareRuntimeICEService::RunTimeICEService>&);
::IceProxy::Ice::Object* upCast(::IceProxy::FlexwareRuntimeICEService::RunTimeICEService*);

}

}

namespace FlexwareRuntimeICEService
{

class RunTimeICEService;
bool operator==(const RunTimeICEService&, const RunTimeICEService&);
bool operator<(const RunTimeICEService&, const RunTimeICEService&);
::Ice::Object* upCast(::FlexwareRuntimeICEService::RunTimeICEService*);
typedef ::IceInternal::Handle< ::FlexwareRuntimeICEService::RunTimeICEService> RunTimeICEServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::FlexwareRuntimeICEService::RunTimeICEService> RunTimeICEServicePrx;
void __patch(RunTimeICEServicePtr&, const ::Ice::ObjectPtr&);

}

namespace FlexwareRuntimeICEService
{

class Callback_RunTimeICEService_RunRobot_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_RunTimeICEService_RunRobot_Base> Callback_RunTimeICEService_RunRobotPtr;

class Callback_RunTimeICEService_RunFPY_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_RunTimeICEService_RunFPY_Base> Callback_RunTimeICEService_RunFPYPtr;

}

namespace IceProxy
{

namespace FlexwareRuntimeICEService
{

class RunTimeICEService : virtual public ::IceProxy::Ice::Object
{
public:

    void RunRobot(const ::std::string& args, ::Ice::Int processId)
    {
        RunRobot(args, processId, 0);
    }
    void RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& __ctx)
    {
        RunRobot(args, processId, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_RunRobot(args, processId, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(response, exception, sent));
    }
    ::Ice::AsyncResultPtr
    begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_RunRobot(args, processId, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& ctx, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_RunRobot(args, processId, &ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(response, exception, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_RunRobot(args, processId, &ctx, ::Ice::newCallback(completed, sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId)
    {
        return begin_RunRobot(args, processId, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& __ctx)
    {
        return begin_RunRobot(args, processId, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunRobot(args, processId, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunRobot(args, processId, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::FlexwareRuntimeICEService::Callback_RunTimeICEService_RunRobotPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunRobot(args, processId, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string& args, ::Ice::Int processId, const ::Ice::Context& __ctx, const ::FlexwareRuntimeICEService::Callback_RunTimeICEService_RunRobotPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunRobot(args, processId, &__ctx, __del, __cookie);
    }

    void end_RunRobot(const ::Ice::AsyncResultPtr&);
    
private:

    void RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void RunFPY(const ::std::string& args)
    {
        RunFPY(args, 0);
    }
    void RunFPY(const ::std::string& args, const ::Ice::Context& __ctx)
    {
        RunFPY(args, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_RunFPY(const ::std::string& args, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_RunFPY(args, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(response, exception, sent));
    }
    ::Ice::AsyncResultPtr
    begin_RunFPY(const ::std::string& args, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_RunFPY(args, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_RunFPY(const ::std::string& args, const ::Ice::Context& ctx, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_RunFPY(args, &ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(response, exception, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_RunFPY(const ::std::string& args, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_RunFPY(args, &ctx, ::Ice::newCallback(completed, sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args)
    {
        return begin_RunFPY(args, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args, const ::Ice::Context& __ctx)
    {
        return begin_RunFPY(args, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunFPY(args, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunFPY(args, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args, const ::FlexwareRuntimeICEService::Callback_RunTimeICEService_RunFPYPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunFPY(args, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string& args, const ::Ice::Context& __ctx, const ::FlexwareRuntimeICEService::Callback_RunTimeICEService_RunFPYPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_RunFPY(args, &__ctx, __del, __cookie);
    }

    void end_RunFPY(const ::Ice::AsyncResultPtr&);
    
private:

    void RunFPY(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_RunFPY(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_secure(bool __secure) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_twoway() const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_oneway() const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_batchOneway() const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_datagram() const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_batchDatagram() const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_compress(bool __compress) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_timeout(int __timeout) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<RunTimeICEService> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<RunTimeICEService*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace FlexwareRuntimeICEService
{

class RunTimeICEService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void RunFPY(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace FlexwareRuntimeICEService
{

class RunTimeICEService : virtual public ::IceDelegate::FlexwareRuntimeICEService::RunTimeICEService,
                          virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void RunFPY(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace FlexwareRuntimeICEService
{

class RunTimeICEService : virtual public ::IceDelegate::FlexwareRuntimeICEService::RunTimeICEService,
                          virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void RunFPY(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace FlexwareRuntimeICEService
{

class RunTimeICEService : virtual public ::Ice::Object
{
public:

    typedef RunTimeICEServicePrx ProxyType;
    typedef RunTimeICEServicePtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void RunRobot(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RunRobot(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RunFPY(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RunFPY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const RunTimeICEService& l, const RunTimeICEService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const RunTimeICEService& l, const RunTimeICEService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace FlexwareRuntimeICEService
{

template<class T>
class CallbackNC_RunTimeICEService_RunRobot : public Callback_RunTimeICEService_RunRobot_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_RunTimeICEService_RunRobot(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunRobot<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunRobot<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunRobot<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunRobot<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_RunTimeICEService_RunRobot : public Callback_RunTimeICEService_RunRobot_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_RunTimeICEService_RunRobot(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunRobot<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunRobot<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunRobot<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunRobotPtr
newCallback_RunTimeICEService_RunRobot(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunRobot<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_RunTimeICEService_RunFPY : public Callback_RunTimeICEService_RunFPY_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_RunTimeICEService_RunFPY(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunFPY<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunFPY<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunFPY<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RunTimeICEService_RunFPY<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_RunTimeICEService_RunFPY : public Callback_RunTimeICEService_RunFPY_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_RunTimeICEService_RunFPY(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunFPY<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunFPY<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunFPY<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RunTimeICEService_RunFPYPtr
newCallback_RunTimeICEService_RunFPY(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RunTimeICEService_RunFPY<T, CT>(instance, 0, excb, sentcb);
}

}

#endif
