
/* std::wfilebuf::_M_get_ext_pos(__mbstate_t&) */

ulong __thiscall std::wfilebuf::_M_get_ext_pos(wfilebuf *this,__mbstate_t *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(**(long **)(this + 200) + 0x30))();
  if (cVar1 != '\0') {
    return *(long *)(this + 0x10) - *(long *)(this + 0x18) >> 2;
  }
  iVar2 = (**(code **)(**(long **)(this + 200) + 0x38))
                    (*(long **)(this + 200),param_1,*(undefined8 *)(this + 0xd0),
                     *(undefined8 *)(this + 0xe0),*(long *)(this + 0x10) - *(long *)(this + 8) >> 2)
  ;
  return (ulong)(uint)((iVar2 + (int)*(undefined8 *)(this + 0xd0)) - *(int *)(this + 0xe8));
}

