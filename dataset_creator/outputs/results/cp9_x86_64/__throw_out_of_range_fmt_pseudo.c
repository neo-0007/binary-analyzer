
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_out_of_range_fmt(char const*, ...) */

void std::__throw_out_of_range_fmt(char *param_1,...)

{
  long lVar1;
  undefined4 *puVar2;
  char in_AL;
  size_t sVar3;
  out_of_range *this;
  char *pcVar4;
  undefined8 in_RCX;
  undefined8 in_RDX;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 in_RSI;
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
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 *puVar7;
  
  puVar7 = &local_e8;
  puVar6 = &local_e8;
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_d0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_c0 = in_RSI;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  sVar3 = strlen(param_1);
  puVar2 = &local_e8;
  while (puVar7 != (undefined4 *)((long)&local_e8 - (sVar3 + 0x217 & 0xfffffffffffff000))) {
    puVar6 = (undefined4 *)((long)puVar2 + -0x1000);
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
    puVar7 = (undefined4 *)((long)puVar2 + -0x1000);
    puVar2 = (undefined4 *)((long)puVar2 + -0x1000);
  }
  uVar5 = (ulong)((uint)(sVar3 + 0x217) & 0xff0);
  lVar1 = -uVar5;
  if (uVar5 != 0) {
    *(undefined8 *)((long)puVar6 + -8) = *(undefined8 *)((long)puVar6 + -8);
  }
  local_e0 = &stack0x00000008;
  local_e8 = 8;
  local_d8 = local_c8;
  local_e4 = 0x30;
  *(undefined8 *)((long)puVar6 + lVar1 + -8) = 0x66b98a;
  __gnu_cxx::__snprintf_lite
            ((char *)((ulong)((long)puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0),sVar3 + 0x200,
             param_1,(__va_list_tag *)&local_e8);
  *(undefined8 *)((long)puVar6 + lVar1 + -8) = 0x66b994;
  this = (out_of_range *)__cxa_allocate_exception(0x10);
  *(undefined8 *)((long)puVar6 + lVar1 + -8) = 0x66b99f;
  pcVar4 = (char *)gettext((char *)((ulong)((long)puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0));
                    /* try { // try from 0066b9a5 to 0066b9a9 has its CatchHandler @ 0066b9b7 */
  *(undefined8 *)((long)puVar6 + lVar1 + -8) = 0x66b9aa;
  out_of_range::out_of_range(this,pcVar4);
  __throw_out_of_range_fmt((char *)this);
  return;
}

