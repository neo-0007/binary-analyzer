
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::istream& std::ws<char, std::char_traits<char> >(std::istream&) */

istream * std::ws<char,std::char_traits<char>>(istream *param_1)

{
  long *plVar1;
  int iVar2;
  ctype *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  locale alStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  locale::locale(alStack_38,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xd0));
                    /* try { // try from 00670bce to 00670bd2 has its CatchHandler @ 00670c92 */
  pcVar3 = use_facet<std::ctype<char>>(alStack_38);
  locale::~locale(alStack_38);
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xe8);
  pbVar4 = (byte *)plVar1[2];
  if (pbVar4 < (byte *)plVar1[3]) goto LAB_00670c0d;
  while (uVar5 = (**(code **)(*plVar1 + 0x48))(plVar1), (int)uVar5 != -1) {
    while( true ) {
      if ((*(byte *)(*(long *)(pcVar3 + 0x30) + 1 + (uVar5 & 0xff) * 2) & 0x20) == 0)
      goto LAB_00670c4f;
      pbVar6 = (byte *)plVar1[3];
      if ((byte *)plVar1[2] < pbVar6) {
        pbVar4 = (byte *)plVar1[2] + 1;
        plVar1[2] = (long)pbVar4;
      }
      else {
        iVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
        if (iVar2 == -1) goto LAB_00670c39;
        pbVar4 = (byte *)plVar1[2];
        pbVar6 = (byte *)plVar1[3];
      }
      if (pbVar6 <= pbVar4) break;
LAB_00670c0d:
      uVar5 = (ulong)*pbVar4;
    }
  }
LAB_00670c39:
  ios::clear((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
             *(uint *)((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) | 2);
LAB_00670c4f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

