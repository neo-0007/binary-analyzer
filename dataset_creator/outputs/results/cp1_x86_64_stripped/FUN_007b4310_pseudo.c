
void FUN_007b4310(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar4 = thunk_FUN_007129d0(param_2);
    lVar4 = FUN_007101b0(lVar4 + 0x19);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lastp != NULL","dl-load.c",0x1b6,"add_name_to_object");
    }
  }
  else {
    do {
      puVar5 = param_1;
      iVar1 = thunk_FUN_00712780(param_2,*puVar5);
      if (iVar1 == 0) {
        return;
      }
      param_1 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    lVar4 = thunk_FUN_007129d0(param_2);
    puVar2 = (undefined8 *)FUN_007101b0(lVar4 + 0x19);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = thunk_FUN_00713a50(puVar2 + 3,param_2,lVar4 + 1);
      puVar2[1] = 0;
      *puVar2 = uVar3;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar5[1] = puVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0xc,param_2,0,"cannot allocate name record");
}

