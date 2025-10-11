
/* void std::__facet_shims::__numpunct_fill_cache<char>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__numpunct_cache<char>*) */

void std::__facet_shims::__numpunct_fill_cache<char>(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x48) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x88) = 1;
  *(undefined1 *)(param_2 + 0x49) = uVar3;
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  (**(code **)(lVar1 + 0x20))(&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064dd74 to 0064dd8b has its CatchHandler @ 0064de73 */
  pcVar4 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar4,uVar2,0);
  pcVar4[uVar2] = '\0';
  *(char **)(param_2 + 0x10) = pcVar4;
  *(ulong *)(param_2 + 0x18) = uVar2;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x28))(&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064ddc3 to 0064ddda has its CatchHandler @ 0064de6d */
  pcVar4 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar4,uVar2,0);
  pcVar4[uVar2] = '\0';
  *(char **)(param_2 + 0x28) = pcVar4;
  *(ulong *)(param_2 + 0x30) = uVar2;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x30))(&local_68,param_1);
                    /* try { // try from 0064de0c to 0064de23 has its CatchHandler @ 0064de64 */
  pcVar4 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar4,local_60,0);
  pcVar4[local_60] = '\0';
  *(char **)(param_2 + 0x38) = pcVar4;
  *(ulong *)(param_2 + 0x40) = local_60;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

