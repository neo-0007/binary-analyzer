
long * FUN_006c70c0(long *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_6;
  if ((-1 < param_3) && (*(long *)(lVar1 + -0x18) != 0)) {
    uVar2 = FUN_006c47a0();
    lVar1 = FUN_006c4700(uVar2,param_3);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      lVar1 = *param_6;
      uVar3 = FUN_006e1eb0(*(undefined8 *)(param_2 + 0x10));
      puVar4 = (undefined1 *)FUN_006e2810(uVar2,lVar1);
      FUN_006e1eb0(uVar3);
      if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
      lVar1 = thunk_FUN_007129d0(puVar4);
      if (lVar1 == 0) {
        plVar6 = (long *)&DAT_009452b8;
      }
      else {
        plVar5 = (long *)FUN_00637be0(lVar1,0,&local_31);
        plVar6 = plVar5 + 3;
        if (lVar1 == 1) {
          *(undefined1 *)(plVar5 + 3) = *puVar4;
        }
        else {
          plVar6 = (long *)thunk_FUN_00713a50(plVar6,puVar4,lVar1);
        }
        if (plVar5 != &DAT_009452a0) {
          *(undefined4 *)(plVar5 + 2) = 0;
          *plVar5 = lVar1;
          *(undefined1 *)((long)plVar5 + lVar1 + 0x18) = 0;
        }
      }
      *param_1 = (long)plVar6;
      goto LAB_006c710f;
    }
    lVar1 = *param_6;
  }
  if (*(int *)(lVar1 + -8) < 0) {
    lVar1 = FUN_00638b30((undefined8 *)(lVar1 + -0x18),&local_31,0);
  }
  else if ((undefined8 *)(lVar1 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
    }
  }
  *param_1 = lVar1;
LAB_006c710f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

