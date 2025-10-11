
ulong FUN_00476c20(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_00485290(*param_1);
  if (param_2 == 0) {
LAB_00476e18:
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_0043c6f0(param_1 + 2,param_2,uVar2);
    if (iVar1 != 0) {
      lVar3 = thunk_FUN_0041cdd0(param_2,"digest-noinit");
      local_34 = 0;
      if (lVar3 == 0) {
LAB_00476cf0:
        lVar3 = thunk_FUN_0041cdd0(param_2,"digest-oneshot");
        local_34 = 0;
        if (lVar3 != 0) {
          uVar6 = 0;
LAB_00476d17:
          local_34 = 0;
          uVar4 = thunk_FUN_0041cf60(lVar3,&local_34);
          if ((int)uVar4 == 0) goto LAB_00476c6f;
          if (local_34 == 0) {
            if (uVar6 == 0) goto LAB_00476d43;
          }
          else {
            uVar6 = uVar6 | 1;
          }
          goto LAB_00476d37;
        }
      }
      else {
        uVar4 = thunk_FUN_0041cf60(lVar3,&local_34);
        if ((int)uVar4 == 0) goto LAB_00476c6f;
        if (local_34 == 0) goto LAB_00476cf0;
        uVar6 = 0x100;
        lVar3 = thunk_FUN_0041cdd0(param_2,"digest-oneshot");
        local_34 = 0;
        if (lVar3 != 0) goto LAB_00476d17;
LAB_00476d37:
        FUN_00545440(param_1[1],uVar6);
      }
LAB_00476d43:
      lVar3 = thunk_FUN_0041cdd0(param_2,"key");
      if (lVar3 == 0) {
LAB_00476de5:
        lVar3 = thunk_FUN_0041cdd0(param_2,"tls-data-size");
        if (lVar3 != 0) {
          iVar1 = thunk_FUN_0041d830(lVar3,param_1 + 7);
          uVar4 = (ulong)(iVar1 != 0);
          goto LAB_00476c6f;
        }
        goto LAB_00476e18;
      }
      if (*(int *)(lVar3 + 8) == 5) {
        if (param_1[6] != 0) {
          FUN_0041c0b0(param_1[5],param_1[6],"../providers/implementations/macs/hmac_prov.c",0x14a);
        }
        lVar5 = *(long *)(lVar3 + 0x18);
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        lVar5 = FUN_0041bc60(lVar5,"../providers/implementations/macs/hmac_prov.c",0x14c);
        param_1[5] = lVar5;
        if (lVar5 != 0) {
          thunk_FUN_00713a50(lVar5,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
          param_1[6] = *(undefined8 *)(lVar3 + 0x18);
          uVar2 = FUN_0043c7e0(param_1 + 2);
          iVar1 = FUN_00544dc0(param_1[1],*(undefined8 *)(lVar3 + 0x10),
                               *(undefined4 *)(lVar3 + 0x18),uVar2,0);
          if (iVar1 != 0) goto LAB_00476de5;
        }
      }
    }
    uVar4 = 0;
  }
LAB_00476c6f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

