
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004391f0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 local_88;
  undefined1 local_70 [64];
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = FUN_00409860();
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)FUN_004098f0(param_1);
      if (puVar3 != (undefined4 *)0x0) {
        iVar1 = FUN_0040a3b0(param_1);
        uVar4 = 0;
        if ((8 < iVar1 - 0x1a3U) || ((0x111UL >> ((ulong)(iVar1 - 0x1a3U) & 0x3f) & 1) == 0))
        goto LAB_0043926a;
        iVar1 = FUN_00409920(param_1);
        if (iVar1 == 0x10) {
          *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
          puVar5 = &local_88;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
          }
          local_88._0_2_ = 0x26;
          FUN_0041c470((undefined2 *)((long)&local_88 + 2),"skcipher",0xe);
          FUN_0041c470(local_70,"cbc(aes)",0x40);
          iVar1 = FUN_00771200(0x26,5,0);
          puVar3[2] = iVar1;
          if (iVar1 == -1) {
            FUN_00771c50(PTR_DAT_0093e068,1,"ALG_PERR: %s(%d): Failed to open socket : ",
                         "../engines/e_afalg.c",0x1b1);
            FUN_006f4c40(0);
            FUN_00438980(0x6d,0x1b2);
          }
          else {
            iVar1 = FUN_00770ed0(iVar1,&local_88,0x58);
            if (iVar1 < 0) {
              FUN_00771c50(PTR_DAT_0093e068,1,"ALG_PERR: %s(%d): Failed to bind socket : ",
                           "../engines/e_afalg.c",0x1b8);
              FUN_006f4c40(0);
              FUN_00438980(0x67,0x1b9);
            }
            else {
              iVar1 = FUN_00770e30(puVar3[2],0,0);
              puVar3[1] = iVar1;
              if (-1 < iVar1) {
                iVar1 = FUN_0040a180(param_1);
                if (0 < iVar1) {
                  iVar1 = FUN_00771190(puVar3[2],0x117,1,param_2,iVar1);
                  if (iVar1 < 0) {
                    FUN_00771c50(PTR_DAT_0093e068,1,
                                 "ALG_PERR: %s(%d): Failed to set socket option : ",
                                 "../engines/e_afalg.c",0x19b);
                    FUN_006f4c40(0);
                    FUN_00438980(0x6a,0x19c);
                  }
                  else {
                    *(undefined8 *)(puVar3 + 6) = 0;
                    iVar1 = FUN_0076efe0(0xce,1,puVar3 + 6);
                    if (-1 < iVar1) {
                      *puVar3 = 0x1890671;
                      *(undefined8 *)(puVar3 + 4) = 0xffffffff;
                      uVar4 = 1;
                      *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x14) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x18) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x1c) = (undefined1  [16])0x0;
                      goto LAB_0043926a;
                    }
                    FUN_00771c50(PTR_DAT_0093e068,1,"ALG_PERR: %s(%d): io_setup error : ",
                                 "../engines/e_afalg.c",0xfc);
                    FUN_006f4c40(0);
                    FUN_00438980(0x69,0xfd);
                  }
                }
                FUN_0076dc30(puVar3[1]);
                FUN_0076dc30(puVar3[2]);
                goto LAB_00439268;
              }
              FUN_00771c50(PTR_DAT_0093e068,1,"ALG_PERR: %s(%d): Socket Accept Failed : ",
                           "../engines/e_afalg.c",0x1bf);
              FUN_006f4c40(0);
              FUN_00438980(0x6e,0x1c0);
            }
          }
          if (-1 < (int)puVar3[2]) {
            FUN_0076dc30();
          }
          if (-1 < (int)puVar3[1]) {
            FUN_0076dc30();
          }
          *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
        }
      }
    }
  }
LAB_00439268:
  uVar4 = 0;
LAB_0043926a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

