
/* (anonymous namespace)::system_error_category::equivalent(int, std::error_condition const&) const
    */

bool __thiscall
(anonymous_namespace)::system_error_category::equivalent
          (system_error_category *this,int param_1,error_condition *param_2)

{
  ulong uVar1;
  
  if (0x83 < param_1) goto LAB_006b6522;
  if (param_1 < 0x47) {
    if (param_1 < 0xf) {
      if (-1 < param_1) goto LAB_006b64f5;
    }
    else if (param_1 - 0x10U < 0x34) {
      uVar1 = 0x8f0000dffffff >> ((ulong)(param_1 - 0x10U) & 0x3f);
      goto joined_r0x006b64f3;
    }
  }
  else {
    uVar1 = 0x18401d9ffd7e2019 >> ((ulong)(param_1 - 0x47) & 0x3f);
joined_r0x006b64f3:
    if ((uVar1 & 1) != 0) {
LAB_006b64f5:
      if (*(undefined8 **)(param_2 + 8) != &generic_category_instance) {
        return false;
      }
      goto LAB_006b652e;
    }
  }
LAB_006b6522:
  if (*(system_error_category **)(param_2 + 8) != this) {
    return false;
  }
LAB_006b652e:
  return *(int *)param_2 == param_1;
}

