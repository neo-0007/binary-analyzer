
/* std::random_device::_M_init_pretr1(std::__cxx11::string const&) */

void __thiscall std::random_device::_M_init_pretr1(random_device *this,string *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 *local_48 [2];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __cxx11::string::compare(param_1,"mt19937");
  if ((iVar1 == 0) || (**(byte **)param_1 - 0x30 < 10)) {
    local_48[0] = local_38;
    __cxx11::string::_M_construct<char_const*>(local_48,"default");
                    /* try { // try from 0068f20a to 0068f20e has its CatchHandler @ 0068f269 */
    _M_init(this,(string *)local_48);
    if (local_48[0] != local_38) {
      operator_delete(local_48[0]);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _M_init(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

