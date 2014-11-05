#ifndef _UTIL_H_
#define _UTIL_H_

#include <stdint.h>
#include <sys/time.h>

/** Return true iff the tvp is related to uvp according to the relational
 * operator cmp.  Recognized values for cmp are ==, <=, <, >=, and >. */
#define	evutil_timercmp(tvp, uvp, cmp)					\
	(((tvp)->tv_sec == (uvp)->tv_sec) ?				\
	 ((tvp)->tv_usec cmp (uvp)->tv_usec) :				\
	 ((tvp)->tv_sec cmp (uvp)->tv_sec))



struct event {
    int min_heap_idx;
	struct timeval ev_timeout;
};

#endif /* _UTIL_H_ */
