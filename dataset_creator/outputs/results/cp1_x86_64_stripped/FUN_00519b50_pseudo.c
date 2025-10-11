
undefined8 FUN_00519b50(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  uVar4 = 4;
  if (uVar5 < 5) {
    uVar4 = uVar5;
  }
  iVar1 = thunk_FUN_00712ab0(param_1,"ALL",uVar4);
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_00712ab0(param_1,"RSA",uVar4);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
      uVar2 = 1;
    }
    else {
      iVar1 = thunk_FUN_00712ab0(param_1,"DSA",uVar4);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 2;
        return 1;
      }
      uVar4 = 3;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      iVar1 = thunk_FUN_00712ab0(param_1,"DH",uVar4);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 4;
        uVar2 = 1;
      }
      else {
        iVar1 = thunk_FUN_00712ab0(param_1,&DAT_00830570,uVar4);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 0x800;
          uVar2 = 1;
        }
        else {
          uVar4 = 5;
          if (uVar5 < 6) {
            uVar4 = uVar5;
          }
          iVar1 = thunk_FUN_00712ab0(param_1,"RAND",uVar4);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 8;
            uVar2 = 1;
          }
          else {
            uVar3 = 8;
            if (uVar5 < 9) {
              uVar3 = uVar5;
            }
            iVar1 = thunk_FUN_00712ab0(param_1,"CIPHERS",uVar3);
            if (iVar1 == 0) {
              *param_3 = *param_3 | 0x40;
              uVar2 = 1;
            }
            else {
              iVar1 = thunk_FUN_00712ab0(param_1,"DIGESTS",uVar3);
              if (iVar1 == 0) {
                *param_3 = *param_3 | 0x80;
                uVar2 = 1;
              }
              else {
                iVar1 = thunk_FUN_00712ab0(param_1,&DAT_00802caf,uVar4);
                if (iVar1 == 0) {
                  *param_3 = *param_3 | 0x600;
                  uVar2 = 1;
                }
                else {
                  uVar4 = 0xc;
                  if (uVar5 < 0xd) {
                    uVar4 = uVar5;
                  }
                  iVar1 = thunk_FUN_00712ab0(param_1,"PKEY_CRYPTO",uVar4);
                  if (iVar1 == 0) {
                    *param_3 = *param_3 | 0x200;
                    uVar2 = 1;
                  }
                  else {
                    uVar4 = 10;
                    if (uVar5 < 0xb) {
                      uVar4 = uVar5;
                    }
                    iVar1 = thunk_FUN_00712ab0(param_1,"PKEY_ASN1",uVar4);
                    if (iVar1 == 0) {
                      *param_3 = *param_3 | 0x400;
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return uVar2;
  }
  *param_3 = *param_3 | 0xffff;
  return 1;
}

