
bool FUN_00419fe0(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_0093fc80 != 0) {
    bVar4 = false;
    if ((param_1 & 0x40000) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/init.c",0x1d3,"OPENSSL_init_crypto");
      FUN_0051f8f0(0xf,0xc0105,0);
    }
    goto LAB_0041a020;
  }
  iVar1 = FUN_00422430(&DAT_0093fc78,&local_48,0);
  if ((iVar1 == 0) || (iVar1 = 1, param_1 != (local_48 & param_1))) {
    iVar2 = FUN_00422340(&DAT_0093fc60,FUN_00419e40);
    bVar4 = false;
    if ((iVar2 == 0) || (DAT_0093fc58 == 0)) goto LAB_0041a020;
    if ((param_1 & 0x40000) == 0) {
      if (iVar1 == 0) {
        iVar1 = FUN_00422430(&DAT_0093fc78,&local_48,DAT_0093fc68);
        if (iVar1 == 0) goto LAB_0041a020;
        if (param_1 == (local_48 & param_1)) goto LAB_0041a268;
      }
      if ((param_1 & 0x80000) == 0) {
        iVar1 = FUN_00422340(&DAT_0093fc54,FUN_00419e10);
      }
      else {
        iVar1 = FUN_00422340(&DAT_0093fc54,FUN_00419c20);
      }
      if (((((((iVar1 == 0) || (DAT_0093fc50 == 0)) ||
             (iVar1 = FUN_00422340(&DAT_0093fc4c,FUN_00419c30), iVar1 == 0)) || (DAT_0093fc48 == 0))
           || (((param_1 & 1) != 0 &&
               ((iVar1 = FUN_00422340(&DAT_0093fc44,FUN_00419c40), iVar1 == 0 || (DAT_0093fc3c == 0)
                ))))) ||
          ((((((param_1 & 2) != 0 &&
              ((iVar1 = FUN_00422340(&DAT_0093fc44,FUN_00419de0), iVar1 == 0 || (DAT_0093fc3c == 0))
              )) || (((param_1 & 0x10) != 0 &&
                     ((iVar1 = FUN_00422340(&DAT_0093fc38,FUN_00419c50), iVar1 == 0 ||
                      (DAT_0093fc34 == 0)))))) ||
            (((param_1 & 4) != 0 &&
             ((iVar1 = FUN_00422340(&DAT_0093fc38,FUN_00419dc0), iVar1 == 0 || (DAT_0093fc34 == 0)))
             ))) || (((((param_1 & 0x20) != 0 &&
                       ((iVar1 = FUN_00422340(&DAT_0093fc30,FUN_00419c60), iVar1 == 0 ||
                        (DAT_0093fc2c == 0)))) ||
                      (((param_1 & 8) != 0 &&
                       ((iVar1 = FUN_00422340(&DAT_0093fc30,FUN_00419da0), iVar1 == 0 ||
                        (DAT_0093fc2c == 0)))))) ||
                     (((param_1 & 0x20000) != 0 && (iVar1 = FUN_00422440(), iVar1 == 0)))))))) ||
         (((param_1 & 0x80) != 0 &&
          ((iVar1 = FUN_00422340(&DAT_0093fc28,FUN_00419d80), iVar1 == 0 || (DAT_0093fc1c == 0))))))
      goto LAB_0041a020;
      if (((param_1 & 0x40) != 0) && (lVar3 = FUN_00422380(&DAT_0093fc64), lVar3 == 0)) {
        iVar1 = FUN_00422390(&DAT_0093fc64,0xffffffffffffffff);
        if (iVar1 == 0) goto LAB_0041a020;
        if (param_2 == 0) {
          iVar2 = FUN_00422340(&DAT_0093fc28,FUN_00419d60);
          iVar1 = DAT_0093fc1c;
          if (iVar2 == 0) goto LAB_0041a020;
        }
        else {
          iVar1 = FUN_004222c0(DAT_0093fc68);
          if (iVar1 == 0) goto LAB_0041a020;
          DAT_0093fc20 = param_2;
          iVar1 = FUN_00422340(&DAT_0093fc28,FUN_00419d40);
          if (iVar1 != 0) {
            iVar1 = DAT_0093fc1c;
          }
          DAT_0093fc20 = 0;
          FUN_004222e0(DAT_0093fc68);
        }
        if (iVar1 < 1) goto LAB_0041a020;
      }
      if (((((param_1 & 0x100) == 0) ||
           ((iVar1 = FUN_00422340(&DAT_0093fc18,FUN_00419d10), iVar1 != 0 && (DAT_0093fc10 != 0))))
          && (((param_1 & 0x800) == 0 ||
              ((iVar1 = FUN_00422340(&DAT_0093fc0c,FUN_00419cf0), iVar1 != 0 && (DAT_0093fc08 != 0))
              )))) &&
         (((((param_1 & 0x200) == 0 ||
            ((iVar1 = FUN_00422340(&DAT_0093fc04,FUN_00419cd0), iVar1 != 0 && (DAT_0093fc00 != 0))))
           && (((param_1 & 0x400) == 0 ||
               ((iVar1 = FUN_00422340(&DAT_0093fbfc,FUN_00419cb0), iVar1 != 0 && (DAT_0093fbf8 != 0)
                ))))) &&
          ((((param_1 & 0x4000) == 0 ||
            ((iVar1 = FUN_00422340(&DAT_0093fbf4,FUN_00419c90), iVar1 != 0 && (DAT_0093fbf0 != 0))))
           && (((param_1 & 0x8000) == 0 ||
               ((iVar1 = FUN_00422340(&DAT_0093fbec,FUN_00419c70), iVar1 != 0 && (DAT_0093fbe8 != 0)
                ))))))))) {
        if ((param_1 & 0xfe00) != 0) {
          FUN_0051a020();
        }
        iVar1 = FUN_00422410(&DAT_0093fc78,param_1,&local_48,DAT_0093fc68);
        bVar4 = iVar1 != 0;
      }
      goto LAB_0041a020;
    }
  }
LAB_0041a268:
  bVar4 = true;
LAB_0041a020:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

