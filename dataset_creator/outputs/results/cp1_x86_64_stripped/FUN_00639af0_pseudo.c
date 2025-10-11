
ulong * FUN_00639af0(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 local_39;
  long local_38;
  long local_30;
  
  uVar2 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ulong *)(uVar2 - 0x18);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2,uVar3);
  }
  uVar7 = uVar3 - param_2;
  if (param_3 < uVar3 - param_2) {
    uVar7 = param_3;
  }
  if ((0x3ffffffffffffff9 - uVar3) + uVar7 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::replace");
  }
  if (((param_4 < uVar2) || (uVar3 + uVar2 < param_4)) || (0 < *(int *)(uVar2 - 8))) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      puVar5 = (ulong *)FUN_00638630(param_1,param_2,uVar7);
      return puVar5;
    }
    goto LAB_00639cb6;
  }
  uVar2 = *param_1;
  if (uVar2 + param_2 < param_4 + param_5) {
    if (param_2 + uVar7 + uVar2 <= param_4) {
      lVar6 = ((param_4 - uVar2) + param_5) - uVar7;
      goto LAB_00639bbc;
    }
    lVar6 = FUN_00639a20(param_4,param_4 + param_5,&local_39);
    local_38 = lVar6;
                    /* try { // try from 00639c4e to 00639c52 has its CatchHandler @ 00639ce0 */
    param_1 = (ulong *)FUN_00638630(param_1,param_2,uVar7,lVar6,param_5);
    if ((undefined8 *)(lVar6 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(lVar6 + -8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(lVar6 + -8);
        *(int *)(lVar6 + -8) = iVar4 + -1;
      }
      if (iVar4 < 1) {
        thunk_FUN_007104f0((undefined8 *)(lVar6 + -0x18),&local_39);
      }
    }
  }
  else {
    lVar6 = param_4 - uVar2;
LAB_00639bbc:
    FUN_00637f00(param_1,param_2,uVar7,param_5);
    if (param_5 == 1) {
      *(undefined1 *)(*param_1 + param_2) = *(undefined1 *)(lVar6 + *param_1);
    }
    else if (param_5 != 0) {
      thunk_FUN_00713a50((undefined1 *)(*param_1 + param_2),(undefined1 *)(lVar6 + *param_1),param_5
                        );
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00639cb6:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

