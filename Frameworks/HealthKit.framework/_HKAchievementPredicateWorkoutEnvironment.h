/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateWorkoutEnvironment : _HKBaseAchievementPredicateEnvironment {
    HKWorkout * _workout;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) double calories;
@property (nonatomic, readonly) double distanceInKilometers;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)UUID;
- (double)calories;
- (double)distanceInKilometers;
- (double)duration;
- (id)endDate;
- (id)initWithWorkout:(id)arg1;
- (id)startDate;
- (unsigned long long)type;

@end
