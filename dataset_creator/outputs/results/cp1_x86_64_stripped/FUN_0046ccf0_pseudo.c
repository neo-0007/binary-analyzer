
bool FUN_0046ccf0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = FUN_0043b840();
  if ((iVar4 != 0) && (iVar4 = FUN_0046c7b0(param_1,param_4), iVar4 != 0)) {
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/tls1_prf.c",0x8f,"kdf_tls1_prf_derive");
      FUN_0051f8f0(0x39,0x81,0);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/tls1_prf.c",0x93,"kdf_tls1_prf_derive");
        FUN_0051f8f0(0x39,0x84,0);
        return false;
      }
      lVar1 = *(long *)(param_1 + 0x428);
      if (lVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/tls1_prf.c",0x97,"kdf_tls1_prf_derive");
        FUN_0051f8f0(0x39,0x8c,0);
        return false;
      }
      if (param_3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/tls1_prf.c",0x9b,"kdf_tls1_prf_derive");
        FUN_0051f8f0(0x39,0x69,0);
        return false;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x20);
      param_1 = param_1 + 0x28;
      if (lVar2 == 0) {
        iVar4 = FUN_0046c9b0(lVar5,lVar6,lVar3,param_1,lVar1,param_2,param_3);
        return iVar4 != 0;
      }
      uVar7 = lVar3 + 1U >> 1;
      iVar4 = FUN_0046c9b0(lVar5,lVar6,uVar7,param_1,lVar1,param_2);
      if (iVar4 != 0) {
        lVar5 = FUN_0041ad90(param_3,"../providers/implementations/kdfs/tls1_prf.c",0x184);
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/tls1_prf.c",0x185,"tls1_prf_alg");
          FUN_0051f8f0(0x39,0xc0100,0);
          return false;
        }
        iVar4 = FUN_0046c9b0(lVar2,lVar6 + (lVar3 - uVar7),uVar7,param_1,lVar1,lVar5,param_3);
        lVar6 = 0;
        if (iVar4 != 0) {
          do {
            *(byte *)(param_2 + lVar6) = *(byte *)(param_2 + lVar6) ^ *(byte *)(lVar5 + lVar6);
            lVar6 = lVar6 + 1;
          } while (param_3 != lVar6);
          FUN_0041aef0(lVar5,param_3,"../providers/implementations/kdfs/tls1_prf.c",400);
          return true;
        }
        FUN_0041aef0(lVar5,param_3,"../providers/implementations/kdfs/tls1_prf.c",0x18b);
        return false;
      }
    }
  }
  return false;
}

