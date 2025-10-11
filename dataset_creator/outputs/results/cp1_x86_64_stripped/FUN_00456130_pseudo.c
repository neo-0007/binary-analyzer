
undefined4
FUN_00456130(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  ulong local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_0042c5c0();
  *param_4 = 0;
  iVar2 = FUN_0042c5e0(param_1,0xf000);
  if (iVar2 == 0) {
    *param_5 = 5;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if (iVar2 == 0x1000) {
      iVar2 = FUN_00433230(uVar3);
      if (iVar2 == 0) {
        lVar5 = 0;
        local_80 = 0;
        bVar1 = false;
        iVar2 = FUN_00547160(local_78);
        if (iVar2 != 0) {
          while( true ) {
            iVar2 = FUN_00484e10(local_78,0xffffffff,uVar3);
            if (((iVar2 == 0) || (iVar2 = FUN_00547ad0(local_78), iVar2 == 0)) ||
               (iVar2 = FUN_005472b0(local_78,&local_80), iVar2 == 0)) goto LAB_004562e0;
            FUN_00547da0(local_78);
            if ((local_80 == 0) || (bVar1)) break;
            bVar1 = true;
            lVar5 = FUN_0041ad90(local_80,
                                 "../providers/implementations/encode_decode/encode_key2any.c",0x35b
                                );
            if ((lVar5 == 0) || (iVar2 = FUN_00546fe0(local_78,lVar5,local_80), iVar2 == 0))
            goto LAB_004562e0;
          }
          lVar4 = FUN_004a21f0();
          if (lVar4 != 0) {
            uVar6 = 1;
            *param_5 = 0x10;
            FUN_004a2150(lVar4,lVar5,local_80 & 0xffffffff);
            *param_4 = lVar4;
            goto LAB_00456250;
          }
        }
LAB_004562e0:
        FUN_0041ad60(lVar5,"../providers/implementations/encode_decode/encode_key2any.c",0x379);
        uVar6 = 0;
      }
      else {
        *param_5 = 0xffffffff;
        uVar6 = 1;
      }
    }
  }
LAB_00456250:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

