
undefined8 FUN_00565ae0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00417730(param_1,2,&DAT_00910af0);
  if (lVar2 != 0) {
    uVar5 = 1;
    if (param_2 == 0) goto LAB_00565bdd;
    iVar1 = FUN_00417500(param_1);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        local_58[0] = param_2;
        FUN_005459e0(lVar2,local_58);
      }
      else {
        lVar3 = thunk_FUN_007129d0(param_2);
        plVar4 = (long *)FUN_0041ad90(lVar3 + 0x18,"../crypto/property/defn_cache.c",0x71);
        if (plVar4 == (long *)0x0) {
LAB_00565c1e:
          uVar5 = 0;
          FUN_0041ad60(plVar4,"../crypto/property/defn_cache.c",0x7e);
        }
        else {
          plVar4[1] = param_3;
          *plVar4 = (long)(plVar4 + 2);
          thunk_FUN_00713a50(plVar4 + 2,param_2,lVar3 + 1);
          lVar3 = FUN_005457f0(lVar2,plVar4);
          if (lVar3 == 0) {
            iVar1 = FUN_00545d90(lVar2);
            if (iVar1 != 0) goto LAB_00565c1e;
          }
          else {
            FUN_004273f0(*(undefined8 *)(lVar3 + 8));
            FUN_0041ad60(lVar3,"../crypto/property/defn_cache.c",0x2f);
          }
        }
      }
      FUN_00417540(param_1);
      goto LAB_00565bdd;
    }
  }
  uVar5 = 0;
LAB_00565bdd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

