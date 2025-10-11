
int buffer_write_part_0(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pbVar1 = param_1->prev_bio;
  if (pbVar1 == (bio_st *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    if (*(long *)&param_1->references != 0) {
      BIO_clear_flags(param_1,0xf);
      iVar5 = pbVar1->flags;
      iVar6 = pbVar1->retry_reason;
      iVar3 = *(int *)((long)&pbVar1->method + 4);
      iVar4 = iVar5 + iVar6;
      iVar8 = iVar3 - iVar4;
      iVar2 = param_3;
      if (iVar8 < param_3) {
        do {
          if (iVar5 != 0) {
            if (0 < iVar8) {
              param_3 = param_3 - iVar8;
              iVar7 = iVar7 + iVar8;
              memcpy((void *)((long)iVar4 + *(long *)&pbVar1->init),param_2,(long)iVar8);
              iVar6 = pbVar1->retry_reason;
              param_2 = (void *)((long)param_2 + (long)iVar8);
              iVar5 = pbVar1->flags + iVar8;
              pbVar1->flags = iVar5;
            }
            do {
              iVar5 = BIO_write(*(BIO **)&param_1->references,
                                (void *)((long)iVar6 + *(long *)&pbVar1->init),iVar5);
              if (iVar5 < 1) {
                BIO_copy_next_retry(param_1);
                if (iVar7 != 0) {
                  return iVar7;
                }
                if (iVar5 == 0) {
                  return 0;
                }
                return iVar5;
              }
              iVar6 = pbVar1->retry_reason + iVar5;
              iVar5 = pbVar1->flags - iVar5;
              pbVar1->retry_reason = iVar6;
              pbVar1->flags = iVar5;
            } while (iVar5 != 0);
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          pbVar1->retry_reason = 0;
          while (iVar3 <= param_3) {
            iVar4 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
            if (iVar4 < 1) {
              BIO_copy_next_retry(param_1);
              if (iVar4 == 0) {
                return iVar7;
              }
              if (iVar7 != 0) {
                return iVar7;
              }
              return iVar4;
            }
            iVar7 = iVar7 + iVar4;
            param_2 = (void *)((long)param_2 + (long)iVar4);
            param_3 = param_3 - iVar4;
            if (param_3 == 0) {
              return iVar7;
            }
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          iVar5 = pbVar1->flags;
          iVar6 = pbVar1->retry_reason;
          iVar4 = iVar5 + iVar6;
          iVar8 = iVar3 - iVar4;
        } while (iVar8 < param_3);
        iVar2 = iVar7 + param_3;
      }
      iVar7 = iVar2;
      memcpy((void *)((long)iVar4 + *(long *)&pbVar1->init),param_2,(long)param_3);
      pbVar1->flags = pbVar1->flags + param_3;
    }
  }
  return iVar7;
}

