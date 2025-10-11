
undefined4 * FUN_0053aad0(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar5 = *(int **)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_0041aec0(0x80,"../crypto/evp/exchange.c",0x17);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/exchange.c",0x1a,"evp_keyexch_new");
    FUN_0051f8f0(6,0xc0100,0);
  }
  else {
    lVar3 = FUN_00422240();
    *(long *)(puVar2 + 10) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar2 + 6) = param_3;
      FUN_00420ec0(param_3);
      LOCK();
      puVar2[8] = 1;
      UNLOCK();
      *puVar2 = param_1;
      lVar3 = FUN_00417d20();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        uVar7 = 0;
        uVar4 = 0;
        iVar6 = 0;
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          do {
            switch(iVar1) {
            case 1:
              if (*(long *)(puVar2 + 0xc) != 0) break;
              *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x0053ad00:
              iVar6 = iVar6 + 1;
              goto joined_r0x0053ad00;
            case 2:
              if (*(long *)(puVar2 + 0xe) == 0) {
                *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 3:
              if (*(long *)(puVar2 + 0x12) == 0) {
                *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 4:
              if (*(long *)(puVar2 + 0x10) == 0) {
                *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 5:
              if (*(long *)(puVar2 + 0x14) == 0) {
                iVar6 = iVar6 + 1;
                *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 6:
              if (*(long *)(puVar2 + 0x16) == 0) {
                *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 7:
              if (*(long *)(puVar2 + 0x18) == 0) {
                uVar4 = uVar4 + 1;
                *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 8:
              if (*(long *)(puVar2 + 0x1a) == 0) {
                uVar4 = uVar4 + 1;
                *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 9:
              if (*(long *)(puVar2 + 0x1c) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
              break;
            case 10:
              if (*(long *)(puVar2 + 0x1e) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053ad00;
              }
            }
            iVar1 = piVar5[4];
joined_r0x0053ad00:
            piVar5 = piVar5 + 4;
          } while (iVar1 != 0);
          if ((iVar6 == 4) && (((uVar4 | uVar7) & 0xfffffffd) == 0)) {
            return puVar2;
          }
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/exchange.c",0x88,"evp_keyexch_from_algorithm");
        FUN_0051f8f0(6,0xc1,0);
      }
      goto LAB_0053ad9c;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/exchange.c",0x20,"evp_keyexch_new");
    FUN_0051f8f0(6,0xc0100,0);
    FUN_0041ad60(puVar2,"../crypto/evp/exchange.c",0x21);
  }
  FUN_0051f420();
  puVar2 = (undefined4 *)0x0;
  FUN_0051f540("../crypto/evp/exchange.c",0x34,"evp_keyexch_from_algorithm");
  FUN_0051f8f0(6,0xc0100,0);
LAB_0053ad9c:
  FUN_0053aa50(puVar2);
  return (undefined4 *)0x0;
}

