
long FUN_004ea1b0(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_2;
  puVar3 = (undefined4 *)FUN_004e85a0(0,&local_48);
  if (puVar3 == (undefined4 *)0x0) {
    lVar6 = 0;
    goto LAB_004ea315;
  }
  if ((param_1 == (long *)0x0) || (lVar6 = *param_1, lVar6 == 0)) {
    lVar6 = FUN_004ed600();
    if (lVar6 != 0) goto LAB_004ea208;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x3aa,"d2i_ECPrivateKey");
    FUN_0051f8f0(0x10,0xc0100,0);
  }
  else {
LAB_004ea208:
    if (*(long *)(puVar3 + 4) != 0) {
      FUN_004efd00();
      lVar4 = FUN_004e9eb0(*(undefined8 *)(puVar3 + 4));
      *(long *)(lVar6 + 0x18) = lVar4;
      if (lVar4 != 0) {
        if (**(int **)(puVar3 + 4) == 1) {
          *(undefined4 *)(lVar4 + 0x28) = 1;
        }
        goto LAB_004ea251;
      }
LAB_004ea368:
      FUN_0051f420();
      uVar5 = 0x3b9;
      goto LAB_004ea379;
    }
    if (*(long *)(lVar6 + 0x18) == 0) goto LAB_004ea368;
LAB_004ea251:
    lVar4 = *(long *)(puVar3 + 2);
    *(undefined4 *)(lVar6 + 0x10) = *puVar3;
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x3c5,"d2i_ECPrivateKey");
      FUN_0051f8f0(0x10,0x7d,0);
    }
    else {
      iVar2 = FUN_004a23b0(lVar4);
      uVar5 = FUN_004a23e0(lVar4);
      iVar2 = FUN_004eeb60(lVar6,uVar5,(long)iVar2);
      if (iVar2 != 0) {
        iVar2 = FUN_004ef870(*(undefined8 *)(lVar6 + 0x18));
        if (iVar2 == 0x494) {
          FUN_004ee8a0(lVar6,4);
        }
        FUN_004efdb0(*(undefined8 *)(lVar6 + 0x20));
        lVar4 = FUN_004efb90(*(undefined8 *)(lVar6 + 0x18));
        *(long *)(lVar6 + 0x20) = lVar4;
        if (lVar4 == 0) {
          FUN_0051f420();
          uVar5 = 0x3cf;
        }
        else {
          if (*(long *)(puVar3 + 6) == 0) {
            pcVar1 = *(code **)(**(long **)(lVar6 + 0x18) + 0x158);
            if (pcVar1 != (code *)0x0) {
              iVar2 = (*pcVar1)(lVar6);
              if (iVar2 != 0) {
                *(uint *)(lVar6 + 0x30) = *(uint *)(lVar6 + 0x30) | 2;
                goto LAB_004ea2f8;
              }
            }
            goto LAB_004ea398;
          }
          uVar5 = FUN_004a23e0();
          iVar2 = FUN_004a23b0(*(undefined8 *)(puVar3 + 6));
          iVar2 = FUN_004ee9a0(lVar6,uVar5,(long)iVar2,0);
          if (iVar2 != 0) {
LAB_004ea2f8:
            if (param_1 != (long *)0x0) {
              *param_1 = lVar6;
            }
            FUN_004e85d0(puVar3);
            *param_2 = local_48;
            *(long *)(lVar6 + 0x68) = *(long *)(lVar6 + 0x68) + 1;
            goto LAB_004ea315;
          }
          FUN_0051f420();
          uVar5 = 0x3da;
        }
LAB_004ea379:
        FUN_0051f540("../crypto/ec/ec_asn1.c",uVar5,"d2i_ECPrivateKey");
        FUN_0051f8f0(0x10,0x80010,0);
      }
    }
  }
LAB_004ea398:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar6)) {
    FUN_004ed620(lVar6);
  }
  lVar6 = 0;
  FUN_004e85d0(puVar3);
LAB_004ea315:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

