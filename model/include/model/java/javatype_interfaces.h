// $Id$
// Created by Aron Barath, 2014

#ifndef MODEL_JAVA_JAVATYPEINTERFACES_H
#define MODEL_JAVA_JAVATYPEINTERFACES_H

#include <string>
#include <memory>
#include <vector>

#include <odb/core.hxx>
#include <odb/lazy-ptr.hxx>

namespace cc
{
namespace model
{

struct JavaType;

// This is the join table generated by JPA.
#pragma db object no_id
struct JavaType_Interfaces
{
  #pragma db not_null
  odb::lazy_shared_ptr<JavaType> type;

  #pragma db not_null
  odb::lazy_shared_ptr<JavaType> iface;
};

typedef std::shared_ptr<JavaType_Interfaces> JavaType_InterfacesPtr;

} // model
} // cc

#include <model/java/javatype.h>

#endif // MODEL_JAVA_JAVATYPEINTERFACES_H
