#include <Python.h>

void init_array(int size);
void set_value(int index, int value);
int get_value(int index);
void free_array();

static PyObject* py_init_array(PyObject* self, PyObject* args) {
    int size;
    if (!PyArg_ParseTuple(args, "i", &size))
        return NULL;
    init_array(size);
    Py_RETURN_NONE;
}

static PyObject* py_set_value(PyObject* self, PyObject* args) {
    int index, value;
    if (!PyArg_ParseTuple(args, "ii", &index, &value))
        return NULL;
    set_value(index, value);
    Py_RETURN_NONE;
}

static PyObject* py_get_value(PyObject* self, PyObject* args) {
    int index;
    if (!PyArg_ParseTuple(args, "i", &index))
        return NULL;
    int result = get_value(index);
    return PyLong_FromLong(result);
}

static PyObject* py_free_array(PyObject* self, PyObject* args) {
    free_array();
    Py_RETURN_NONE;
}

static PyMethodDef ArrayMethods[] = {
    {"init_array", py_init_array, METH_VARARGS, "Initialize array"},
    {"set_value", py_set_value, METH_VARARGS, "Set array value"},
    {"get_value", py_get_value, METH_VARARGS, "Get array value"},
    {"free_array", py_free_array, METH_NOARGS, "Free array"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef arraymodule = {
    PyModuleDef_HEAD_INIT,
    "arraymodule",
    "Simple integer array module",
    -1,
    ArrayMethods
};

PyMODINIT_FUNC PyInit_arraymodule(void) {
    return PyModule_Create(&arraymodule);
}
