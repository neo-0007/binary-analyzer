
undefined8 int_def_cb(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  size_t __n;
  size_t sVar3;
  ulong uVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar4 = (ulong)param_2;
  sVar3 = 4;
  if (uVar4 < 5) {
    sVar3 = uVar4;
  }
  iVar1 = strncmp(param_1,"ALL",sVar3);
  if (iVar1 != 0) {
    iVar1 = strncmp(param_1,"RSA",sVar3);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
      uVar2 = 1;
    }
    else {
      iVar1 = strncmp(param_1,"DSA",sVar3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 2;
        return 1;
      }
      sVar3 = 3;
      if (uVar4 < 4) {
        sVar3 = uVar4;
      }
      iVar1 = strncmp(param_1,"DH",sVar3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 4;
        uVar2 = 1;
      }
      else {
        iVar1 = strncmp(param_1,"EC",sVar3);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 0x800;
          uVar2 = 1;
        }
        else {
          sVar3 = 5;
          if (uVar4 < 6) {
            sVar3 = uVar4;
          }
          iVar1 = strncmp(param_1,"RAND",sVar3);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 8;
            uVar2 = 1;
          }
          else {
            __n = 8;
            if (uVar4 < 9) {
              __n = uVar4;
            }
            iVar1 = strncmp(param_1,"CIPHERS",__n);
            if (iVar1 == 0) {
              *param_3 = *param_3 | 0x40;
              uVar2 = 1;
            }
            else {
              iVar1 = strncmp(param_1,"DIGESTS",__n);
              if (iVar1 == 0) {
                *param_3 = *param_3 | 0x80;
                uVar2 = 1;
              }
              else {
                iVar1 = strncmp(param_1,"PKEY",sVar3);
                if (iVar1 == 0) {
                  *param_3 = *param_3 | 0x600;
                  uVar2 = 1;
                }
                else {
                  sVar3 = 0xc;
                  if (uVar4 < 0xd) {
                    sVar3 = uVar4;
                  }
                  iVar1 = strncmp(param_1,"PKEY_CRYPTO",sVar3);
                  if (iVar1 == 0) {
                    *param_3 = *param_3 | 0x200;
                    uVar2 = 1;
                  }
                  else {
                    sVar3 = 10;
                    if (uVar4 < 0xb) {
                      sVar3 = uVar4;
                    }
                    iVar1 = strncmp(param_1,"PKEY_ASN1",sVar3);
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

