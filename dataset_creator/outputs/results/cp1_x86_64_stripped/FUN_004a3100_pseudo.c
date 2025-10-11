
int FUN_004a3100(int *param_1,long *param_2,long param_3,byte param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  byte local_6c;
  char local_52;
  char local_51;
  char *local_50;
  long local_48;
  long local_40;
  
  local_50 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = param_4 & 1;
  if (param_3 < 1) {
LAB_004a32f0:
    if (local_6c != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x442,"asn1_collect");
      FUN_0051f8f0(0xd,0x89,0);
      iVar4 = 0;
      goto LAB_004a328d;
    }
  }
  else {
    if (param_3 == 1) goto LAB_004a3160;
    while ((*local_50 != '\0' || (local_50[1] != '\0'))) {
LAB_004a3160:
      do {
        pcVar1 = local_50;
        iVar4 = FUN_004a2db0(&local_48,0,0,&local_51,&local_52,&local_50,param_3,0xffffffffffffffff,
                             0,0,0);
        lVar3 = local_48;
        if (iVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x431,"asn1_collect");
          FUN_0051f8f0(0xd,0x8010a,0);
          iVar4 = 0;
          goto LAB_004a328d;
        }
        if (local_52 == '\0') {
          if (local_48 != 0) {
            iVar4 = *param_1;
            lVar5 = FUN_004c5190(param_1,iVar4 + local_48);
            pcVar2 = local_50;
            if (lVar5 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/tasn_dec.c",0x44f,"collect_data");
              FUN_0051f8f0(0xd,0xc0100,0);
              iVar4 = 0;
              goto LAB_004a328d;
            }
            thunk_FUN_00713a50(*(long *)(param_1 + 2) + (long)iVar4);
            local_50 = pcVar2 + lVar3;
          }
        }
        else {
          if (param_5 == 5) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/tasn_dec.c",0x438,"asn1_collect");
            FUN_0051f8f0(0xd,0xc5,0);
            iVar4 = 0;
            goto LAB_004a328d;
          }
          iVar4 = FUN_004a3100(param_1,&local_50,local_48,(int)local_51,param_5 + 1);
          if (iVar4 == 0) goto LAB_004a328d;
        }
        param_3 = param_3 - ((long)local_50 - (long)pcVar1);
        if (param_3 < 1) goto LAB_004a32f0;
      } while (param_3 == 1);
    }
    local_50 = local_50 + 2;
    if (local_6c == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x428,"asn1_collect");
      FUN_0051f8f0(0xd,0x9f,0);
      iVar4 = 0;
      goto LAB_004a328d;
    }
  }
  *param_2 = (long)local_50;
  iVar4 = 1;
LAB_004a328d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

