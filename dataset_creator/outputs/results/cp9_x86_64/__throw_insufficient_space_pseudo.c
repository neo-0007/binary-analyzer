
/* __gnu_cxx::__throw_insufficient_space(char const*, char const*) */

void __gnu_cxx::__throw_insufficient_space(char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  size_t __n;
  char *pcVar15;
  char *pcVar17;
  long in_FS_OFFSET;
  char local_98 [8];
  char acStack_90 [8];
  char local_88 [8];
  char acStack_80 [8];
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  char *pcVar16;
  
  uVar13 = s___not_enough_space_for_format_ex_00815f2e._90_8_;
  uVar12 = s___not_enough_space_for_format_ex_00815f2e._82_8_;
  uVar11 = s___not_enough_space_for_format_ex_00815f2e._74_8_;
  uVar10 = s___not_enough_space_for_format_ex_00815f2e._66_8_;
  uVar9 = s___not_enough_space_for_format_ex_00815f2e._58_8_;
  uVar8 = s___not_enough_space_for_format_ex_00815f2e._50_8_;
  uVar7 = s___not_enough_space_for_format_ex_00815f2e._42_8_;
  uVar6 = s___not_enough_space_for_format_ex_00815f2e._34_8_;
  uVar5 = s___not_enough_space_for_format_ex_00815f2e._26_8_;
  uVar4 = s___not_enough_space_for_format_ex_00815f2e._18_8_;
  uVar3 = s___not_enough_space_for_format_ex_00815f2e._10_8_;
  uVar2 = s___not_enough_space_for_format_ex_00815f2e._2_8_;
  __n = (long)param_2 - (long)param_1;
  pcVar15 = local_98;
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_98 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._2_8_;
  acStack_90 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._10_8_;
  local_38 = 0x202020200a3a292f;
  local_88 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._18_8_;
  acStack_80 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._26_8_;
  local_78 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._34_8_;
  acStack_70 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._42_8_;
  local_68 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._50_8_;
  acStack_60 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._58_8_;
  local_58 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._66_8_;
  acStack_50 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._74_8_;
  local_48 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._82_8_;
  acStack_40 = (char  [8])s___not_enough_space_for_format_ex_00815f2e._90_8_;
  pcVar16 = local_98;
  pcVar17 = local_98;
  while (pcVar16 != local_98 + -(__n + 0x80 & 0xfffffffffffff000)) {
    pcVar15 = pcVar17 + -0x1000;
    *(undefined8 *)(pcVar17 + -8) = *(undefined8 *)(pcVar17 + -8);
    pcVar16 = pcVar17 + -0x1000;
    pcVar17 = pcVar17 + -0x1000;
  }
  uVar14 = (ulong)((uint)(__n + 0x80) & 0xff0);
  lVar1 = -uVar14;
  if (uVar14 != 0) {
    *(undefined8 *)(pcVar15 + -8) = *(undefined8 *)(pcVar15 + -8);
  }
  pcVar17 = (char *)((ulong)(pcVar15 + lVar1 + 0xf) & 0xfffffffffffffff0);
  pcVar17[0x60] = '/';
  pcVar17[0x61] = ')';
  pcVar17[0x62] = ':';
  pcVar17[99] = '\n';
  pcVar17[100] = ' ';
  pcVar17[0x65] = ' ';
  pcVar17[0x66] = ' ';
  pcVar17[0x67] = ' ';
  *(undefined8 *)(pcVar17 + 0x10) = uVar4;
  *(undefined8 *)(pcVar17 + 0x18) = uVar5;
  *(undefined8 *)pcVar17 = uVar2;
  *(undefined8 *)(pcVar17 + 8) = uVar3;
  *(undefined8 *)(pcVar17 + 0x20) = uVar6;
  *(undefined8 *)(pcVar17 + 0x28) = uVar7;
  *(undefined8 *)(pcVar17 + 0x30) = uVar8;
  *(undefined8 *)(pcVar17 + 0x38) = uVar9;
  *(undefined8 *)(pcVar17 + 0x40) = uVar10;
  *(undefined8 *)(pcVar17 + 0x48) = uVar11;
  *(undefined8 *)(pcVar17 + 0x50) = uVar12;
  *(undefined8 *)(pcVar17 + 0x58) = uVar13;
  *(undefined8 *)(pcVar15 + lVar1 + -8) = 0x68f5bc;
  memcpy(pcVar17 + 0x68,param_1,__n);
  pcVar17[__n + 0x68] = '\0';
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(pcVar15 + lVar1 + -8) = 0x68f5ca;
  std::__throw_logic_error(pcVar17);
}

