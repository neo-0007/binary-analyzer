
undefined8 FUN_0055a940(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  iVar1 = FUN_004ab770(param_1,local_58,0x10);
  if (iVar1 == 0x10) {
    local_60 = local_58;
    iVar1 = FUN_005594b0(&local_60,0x10,local_68,&local_6c,&local_64,param_2);
    uVar6 = 0;
    if (0 < iVar1) {
      uVar2 = FUN_00559780(local_6c,local_64,*param_2);
      if (uVar2 < 0x19001) {
        puVar4 = (undefined1 *)FUN_0041ad90(uVar2,"../crypto/pem/pvkfmt.c",0x157);
        if (puVar4 == (undefined1 *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pvkfmt.c",0x159,"ossl_b2i_bio");
          FUN_0051f8f0(9,0xc0100,0);
        }
        else {
          local_60 = puVar4;
          uVar3 = FUN_004ab770(param_1,puVar4,uVar2);
          if (uVar2 == uVar3) {
            if (local_64 == 0) {
              lVar5 = FUN_0055a560(&local_60,local_6c,*param_2);
            }
            else {
              lVar5 = FUN_0055a2d0();
            }
            if (lVar5 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/pem/pvkfmt.c",0x16a,"ossl_b2i_bio");
              FUN_0051f8f0(9,0x6e,0);
              uVar6 = 0;
            }
            else {
              uVar6 = 6;
              if ((local_64 != 0) && (uVar6 = 0x74, local_64 != 1)) {
                uVar6 = 0;
              }
              uVar6 = FUN_00559290(lVar5,uVar6);
            }
          }
          else {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pvkfmt.c",0x15e,"ossl_b2i_bio");
            FUN_0051f8f0(9,0x7b,0);
          }
        }
        FUN_0041ad60(puVar4,"../crypto/pem/pvkfmt.c",0x170);
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pvkfmt.c",0x154,"ossl_b2i_bio");
        FUN_0051f8f0(9,0x80,0);
      }
    }
  }
  else {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x14b,"ossl_b2i_bio");
    FUN_0051f8f0(9,0x7b,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

