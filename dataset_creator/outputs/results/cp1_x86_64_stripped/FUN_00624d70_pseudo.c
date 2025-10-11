
void FUN_00624d70(void)

{
  if (DAT_0093ea10 == '\0') {
    LOCK();
    UNLOCK();
  }
  if (DAT_009453f4 == 2) {
    DAT_009453f4 = 1;
                    /* try { // try from 00624db1 to 00624df1 has its CatchHandler @ 00624df7 */
    FUN_0068ce90(&DAT_009437e0);
    FUN_0068ce90(&DAT_009436c0);
    FUN_0068ce90(&DAT_009435a0);
    FUN_0068f8c0(&DAT_00943360);
    FUN_0068f8c0(&DAT_00943240);
    FUN_0068f8c0(&DAT_00943120);
    return;
  }
  DAT_009453f4 = DAT_009453f4 + -1;
  return;
}

