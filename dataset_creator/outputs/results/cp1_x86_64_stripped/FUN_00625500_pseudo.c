
bool FUN_00625500(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 *local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  long local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != *param_2) {
    plVar1 = *(long **)(*param_1 + 0x20);
    if (((*plVar1 == 0) || (plVar2 = *(long **)(*param_2 + 0x20), *plVar2 == 0)) ||
       (iVar3 = thunk_FUN_00712780(), iVar3 != 0)) {
      bVar5 = false;
      goto LAB_006255da;
    }
    if ((plVar1[1] != 0) || (plVar2[1] != 0)) {
                    /* try { // try from 0062556e to 00625572 has its CatchHandler @ 00625647 */
      FUN_006251b0(&local_58,param_2);
                    /* try { // try from 0062557b to 0062557f has its CatchHandler @ 00625638 */
      FUN_006251b0(&local_78,param_1);
      puVar4 = local_58;
      bVar5 = false;
      if ((local_70 == local_50) && (bVar5 = true, local_70 != 0)) {
        iVar3 = thunk_FUN_00713570(local_78,local_58);
        bVar5 = iVar3 == 0;
      }
      if (local_78 != local_68) {
        thunk_FUN_007104f0(local_78);
        puVar4 = local_58;
      }
      if (puVar4 != local_48) {
        thunk_FUN_007104f0(puVar4);
      }
      goto LAB_006255da;
    }
  }
  bVar5 = true;
LAB_006255da:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar5;
}

