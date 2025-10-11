
void _dl_unload_cache(void)

{
  if (0xfffffffffffffffd < (long)cache - 1U) {
    return;
  }
  munmap(cache,cachesize);
  cache = (void *)0x0;
  return;
}

