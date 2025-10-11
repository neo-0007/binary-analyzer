
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__convert_from_v(__locale_struct* const&, char*, int, char const*, ...) */

int std::__convert_from_v(__locale_struct **param_1,char *param_2,int param_3,char *param_4,...)

{
  char in_AL;
  int iVar1;
  __locale_t __dataset;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = in_R8;
  local_b0 = in_R9;
  __dataset = uselocale(*param_1);
  local_f0 = &stack0x00000008;
  local_f8 = 0x20;
  local_e8 = local_d8;
  local_f4 = 0x30;
  iVar1 = vsnprintf(param_2,(long)param_3,param_4,&local_f8);
  uselocale(__dataset);
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

