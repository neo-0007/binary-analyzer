
/* std::random_device::_M_fini() */

void __thiscall std::random_device::_M_fini(random_device *this)

{
  if (*(long *)this != 0) {
    close(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0xffffffff;
    *(undefined8 *)this = 0;
    return;
  }
  return;
}

