#include <Python.h>

static PyObject* square(PyObject* self, PyObject* args) {
    double x;
    if (!PyArg_ParseTuple(args, "d", &x)) {
        return NULL;
    }
    return PyFloat_FromDouble(x * x);
}

static PyMethodDef SquareMethods[] = {
    {"square", square, METH_VARARGS, "Return the square of a number."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef squaremodule = {
    PyModuleDef_HEAD_INIT,
    "csquare",
    "Square function module",
    -1,
    SquareMethods
};

PyMODINIT_FUNC PyInit_csquare(void) {
    return PyModule_Create(&squaremodule);
}



