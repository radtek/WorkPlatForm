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
// Generated from file `RobotRemoteService.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __E__code_WorkPlatForm_PeraPcIce_testiceclient_RobotRemoteService_h__
#define __E__code_WorkPlatForm_PeraPcIce_testiceclient_RobotRemoteService_h__

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
#include <Ice/FactoryTableInit.h>
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

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::com::pera::base::runtime::remote::RobotRemoteService>&);
::IceProxy::Ice::Object* upCast(::IceProxy::com::pera::base::runtime::remote::RobotRemoteService*);

}

}

}

}

}

}

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService;
bool operator==(const RobotRemoteService&, const RobotRemoteService&);
bool operator<(const RobotRemoteService&, const RobotRemoteService&);
::Ice::Object* upCast(::com::pera::base::runtime::remote::RobotRemoteService*);
typedef ::IceInternal::Handle< ::com::pera::base::runtime::remote::RobotRemoteService> RobotRemoteServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::pera::base::runtime::remote::RobotRemoteService> RobotRemoteServicePrx;
void __patch(RobotRemoteServicePtr&, const ::Ice::ObjectPtr&);

}

}

}

}

}

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RemoteException : public ::Ice::UserException
{
public:

    RemoteException() {}
    explicit RemoteException(const ::std::string&);
    virtual ~RemoteException() throw();

    virtual ::std::string ice_name() const;
    virtual RemoteException* ice_clone() const;
    virtual void ice_throw() const;

    ::std::string reason;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::UserException::__writeImpl;
    using ::Ice::UserException::__readImpl;
    #endif
};

static RemoteException __RemoteException_init;

}

}

}

}

}

namespace Ice
{
template<>
struct StreamableTraits< ::com::pera::base::runtime::remote::RemoteException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

}

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class Callback_RobotRemoteService_runRobotStart_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_RobotRemoteService_runRobotStart_Base> Callback_RobotRemoteService_runRobotStartPtr;

class Callback_RobotRemoteService_runRobotStop_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_RobotRemoteService_runRobotStop_Base> Callback_RobotRemoteService_runRobotStopPtr;

}

}

}

}

}

namespace IceProxy
{

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string runRobotStart(const ::std::string& robotInfo)
    {
        return runRobotStart(robotInfo, 0);
    }
    ::std::string runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& __ctx)
    {
        return runRobotStart(robotInfo, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_runRobotStart(const ::std::string& robotInfo, const ::IceInternal::Function<void (const ::std::string&)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_runRobotStart(robotInfo, 0, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStart(const ::std::string& robotInfo, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_runRobotStart(robotInfo, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::std::string&)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_runRobotStart(robotInfo, &ctx, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_runRobotStart(robotInfo, &ctx, ::Ice::newCallback(completed, sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context* ctx, const ::IceInternal::Function<void (const ::std::string&)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception, const ::IceInternal::Function<void (bool)>& sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::std::string&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
                ::std::string __ret;
                try
                {
                    __ret = __proxy->end_runRobotStart(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (const ::std::string&)> _response;
        };
        return begin_runRobotStart(robotInfo, ctx, new Cpp11CB(response, exception, sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo)
    {
        return begin_runRobotStart(robotInfo, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& __ctx)
    {
        return begin_runRobotStart(robotInfo, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStart(robotInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStart(robotInfo, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo, const ::com::pera::base::runtime::remote::Callback_RobotRemoteService_runRobotStartPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStart(robotInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string& robotInfo, const ::Ice::Context& __ctx, const ::com::pera::base::runtime::remote::Callback_RobotRemoteService_runRobotStartPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStart(robotInfo, &__ctx, __del, __cookie);
    }

    ::std::string end_runRobotStart(const ::Ice::AsyncResultPtr&);
    
private:

    ::std::string runRobotStart(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_runRobotStart(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void runRobotStop(const ::std::string& taskId)
    {
        runRobotStop(taskId, 0);
    }
    void runRobotStop(const ::std::string& taskId, const ::Ice::Context& __ctx)
    {
        runRobotStop(taskId, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_runRobotStop(const ::std::string& taskId, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_runRobotStop(taskId, 0, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStop(const ::std::string& taskId, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_runRobotStop(taskId, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context& ctx, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_runRobotStop(taskId, &ctx, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_runRobotStop(taskId, &ctx, ::Ice::newCallback(completed, sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context* ctx, const ::IceInternal::Function<void ()>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception, const ::IceInternal::Function<void (bool)>& sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void ()>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
                try
                {
                    __proxy->end_runRobotStop(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response();
                }
            }
        
        private:
            
            ::std::function<void ()> _response;
        };
        return begin_runRobotStop(taskId, ctx, new Cpp11CB(response, exception, sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId)
    {
        return begin_runRobotStop(taskId, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context& __ctx)
    {
        return begin_runRobotStop(taskId, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStop(taskId, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStop(taskId, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId, const ::com::pera::base::runtime::remote::Callback_RobotRemoteService_runRobotStopPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStop(taskId, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string& taskId, const ::Ice::Context& __ctx, const ::com::pera::base::runtime::remote::Callback_RobotRemoteService_runRobotStopPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_runRobotStop(taskId, &__ctx, __del, __cookie);
    }

    void end_runRobotStop(const ::Ice::AsyncResultPtr&);
    
private:

    void runRobotStop(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_runRobotStop(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_secure(bool __secure) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_twoway() const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_oneway() const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_batchOneway() const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_datagram() const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_batchDatagram() const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_compress(bool __compress) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_timeout(int __timeout) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<RobotRemoteService> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<RobotRemoteService*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

}

}

}

namespace IceDelegate
{

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string runRobotStart(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void runRobotStop(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

}

}

}

}

namespace IceDelegateM
{

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService : virtual public ::IceDelegate::com::pera::base::runtime::remote::RobotRemoteService,
                           virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string runRobotStart(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void runRobotStop(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

}

}

}

}

namespace IceDelegateD
{

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService : virtual public ::IceDelegate::com::pera::base::runtime::remote::RobotRemoteService,
                           virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string runRobotStart(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void runRobotStop(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

}

}

}

}

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

class RobotRemoteService : virtual public ::Ice::Object
{
public:

    typedef RobotRemoteServicePrx ProxyType;
    typedef RobotRemoteServicePtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string runRobotStart(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___runRobotStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void runRobotStop(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___runRobotStop(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const RobotRemoteService& l, const RobotRemoteService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const RobotRemoteService& l, const RobotRemoteService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

}

}

}

}

namespace com
{

namespace pera
{

namespace base
{

namespace runtime
{

namespace remote
{

template<class T>
class CallbackNC_RobotRemoteService_runRobotStart : public Callback_RobotRemoteService_runRobotStart_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_RobotRemoteService_runRobotStart(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_runRobotStart(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_RobotRemoteService_runRobotStartPtr
newCallback_RobotRemoteService_runRobotStart(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStart<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RobotRemoteService_runRobotStartPtr
newCallback_RobotRemoteService_runRobotStart(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStart<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_RobotRemoteService_runRobotStart : public Callback_RobotRemoteService_runRobotStart_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_RobotRemoteService_runRobotStart(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_runRobotStart(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_RobotRemoteService_runRobotStartPtr
newCallback_RobotRemoteService_runRobotStart(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStart<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RobotRemoteService_runRobotStartPtr
newCallback_RobotRemoteService_runRobotStart(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStart<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_RobotRemoteService_runRobotStop : public Callback_RobotRemoteService_runRobotStop_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_RobotRemoteService_runRobotStop(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
        try
        {
            __proxy->end_runRobotStop(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)();
        }
    }

    Response response;
};

template<class T> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStop<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStop<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStop<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_RobotRemoteService_runRobotStop<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_RobotRemoteService_runRobotStop : public Callback_RobotRemoteService_runRobotStop_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_RobotRemoteService_runRobotStop(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::com::pera::base::runtime::remote::RobotRemoteServicePrx __proxy = ::com::pera::base::runtime::remote::RobotRemoteServicePrx::uncheckedCast(__result->getProxy());
        try
        {
            __proxy->end_runRobotStop(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStop<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStop<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStop<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_RobotRemoteService_runRobotStopPtr
newCallback_RobotRemoteService_runRobotStop(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_RobotRemoteService_runRobotStop<T, CT>(instance, 0, excb, sentcb);
}

}

}

}

}

}

#endif
