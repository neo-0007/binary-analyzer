
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wistream& std::ws<wchar_t, std::char_traits<wchar_t> >(std::wistream&) */

wistream * std::ws<wchar_t,std::char_traits<wchar_t>>(wistream *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ctype *pcVar4;
  int *piVar5;
  long in_FS_OFFSET;
  locale alStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  locale::locale(alStack_38,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xd0));
                    /* try { // try from 0067405e to 00674062 has its CatchHandler @ 00674128 */
  pcVar4 = use_facet<std::ctype<wchar_t>>(alStack_38);
  locale::~locale(alStack_38);
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xe8);
  piVar5 = (int *)plVar1[2];
  if ((int *)plVar1[3] <= piVar5) goto LAB_006740cd;
  while (*piVar5 != -1) {
    while( true ) {
      cVar2 = (**(code **)(*(long *)pcVar4 + 0x10))(pcVar4,0x2000);
      if (cVar2 == '\0') goto LAB_006740f6;
      piVar5 = (int *)plVar1[2];
      if (piVar5 < (int *)plVar1[3]) {
        iVar3 = *piVar5;
        plVar1[2] = (long)(piVar5 + 1);
      }
      else {
        iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
      }
      if (iVar3 == -1) goto LAB_006740e0;
      piVar5 = (int *)plVar1[2];
      if (piVar5 < (int *)plVar1[3]) break;
LAB_006740cd:
      iVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
      if (iVar3 == -1) goto LAB_006740e0;
    }
  }
LAB_006740e0:
  wios::clear((wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
              *(uint *)((wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) | 2);
LAB_006740f6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

