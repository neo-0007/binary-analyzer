
/* void std::__facet_shims::__moneypunct_fill_cache<char, true>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__moneypunct_cache<char, true>*) */

void std::__facet_shims::__moneypunct_fill_cache<char,true>(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x21) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x22) = uVar3;
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined1 *)(param_2 + 0x6f) = 1;
  *(undefined4 *)(param_2 + 0x58) = uVar4;
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  (**(code **)(lVar1 + 0x20))(&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064e346 to 0064e35d has its CatchHandler @ 0064e4b0 */
  pcVar5 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar5,uVar2,0);
  pcVar5[uVar2] = '\0';
  *(ulong *)(param_2 + 0x18) = uVar2;
  *(char **)(param_2 + 0x10) = pcVar5;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x28))(&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064e395 to 0064e3ac has its CatchHandler @ 0064e4aa */
  pcVar5 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar5,uVar2,0);
  pcVar5[uVar2] = '\0';
  *(char **)(param_2 + 0x28) = pcVar5;
  *(ulong *)(param_2 + 0x30) = uVar2;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x30))(&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064e3df to 0064e3f6 has its CatchHandler @ 0064e4a4 */
  pcVar5 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar5,uVar2,0);
  pcVar5[uVar2] = '\0';
  *(char **)(param_2 + 0x38) = pcVar5;
  *(ulong *)(param_2 + 0x40) = uVar2;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x38))(&local_68,param_1);
                    /* try { // try from 0064e429 to 0064e440 has its CatchHandler @ 0064e49b */
  pcVar5 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar5,local_60,0);
  pcVar5[local_60] = '\0';
  *(char **)(param_2 + 0x48) = pcVar5;
  *(ulong *)(param_2 + 0x50) = local_60;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined4 *)(param_2 + 0x5c) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  *(undefined4 *)(param_2 + 0x60) = uVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

