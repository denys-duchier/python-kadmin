
#ifndef PYKADMINPOLICYOBJECT_H
#define PYKADMINPOLICYOBJECT_H

#include <Python.h>
#include <kadm5/admin.h>
#include <krb5/krb5.h>
#include <stdio.h>
#include <string.h>
#include <structmember.h>

#include "PyKadminCommon.h"

extern time_t get_date(char *);

typedef struct {
    PyObject_HEAD
    PyKAdminObject *kadmin;
    kadm5_policy_ent_rec entry; 
} PyKAdminPolicyObject;

PyTypeObject PyKAdminPolicyObject_Type;

PyKAdminPolicyObject *PyKAdminPolicyObject_policy_with_name(PyKAdminObject *kadmin, char *name);
PyKAdminPolicyObject *PyKAdminPolicyObject_policy_with_osa_entry(PyKAdminObject *kadmin, osa_policy_ent_rec *entry);

void PyKAdminPolicyObject_destroy(PyKAdminPolicyObject *self);

#endif
